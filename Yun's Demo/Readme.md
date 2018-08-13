# **微信小程序--倒计时表**
## **基本功能**：用户可以自行输入时间并进行倒计时测量
## **使用方式**：用户在规定区域输入倒计时的描述，点击确定后开始倒计时，显示剩余时间，剩余时间为零时显示已经截止

## **工作原理**：将用户输入的时间导入后将其转化为时分秒毫秒的形式，然后通过设计的10ms时钟以及倒计时的算法实现倒计时的功能，通过判断从而显示当前应该显示的为“已经截止”或剩余的时间
***
## **部分代码**：
### 时间转换函数：
  ```
  function date_format(micro_second) {
  var second = Math.floor(micro_second / 1000);
  var hr = Math.floor(second / 3600);
  var min = fill_zero_prefix(Math.floor((second - hr * 3600) / 60));
  var sec = fill_zero_prefix((second - hr * 3600 - min * 60));// equal to => var sec = second % 60;
  var micro_sec = fill_zero_prefix(Math.floor((micro_second % 1000) / 10));
  return hr + ":" + min + ":" + sec + " " + micro_sec;
  function fill_zero_prefix(num) {
  return num < 10 ? "0" + num : num
}
}
```
### 计时代码：
```
var total_micro_second;
function count_down(that) {
  that.setData({
    clock: date_format(total_micro_second)
  });
  if (total_micro_second <= 0) {
    that.setData({
      clock: "已经截止"
    });
    return;
  }
  setTimeout(function () {
    total_micro_second -= 10;
    count_down(that);
  }
    , 10)
}
```
## 程序不足和待升级：程序功能较少，使用意义不大，可以再进行程序编写，使程序更完善