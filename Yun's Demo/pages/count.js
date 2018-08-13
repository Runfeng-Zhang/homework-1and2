
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
function date_format(micro_second) {
  var second = Math.floor(micro_second / 1000);
  var hr = Math.floor(second / 3600);
  var min = fill_zero_prefix(Math.floor((second - hr * 3600) / 60));
  var sec = fill_zero_prefix((second - hr * 3600 - min * 60));// equal to => var sec = second % 60;
  var micro_sec = fill_zero_prefix(Math.floor((micro_second % 1000) / 10));
  return hr + ":" + min + ":" + sec + " " + micro_sec;
}
function fill_zero_prefix(num) {
  return num < 10 ? "0" + num : num
}
Page({
  data: {
    clock: ''
  },
  onLoad: function () {
  },
  formSubmit: function (event) {
    console.log(event.detail.value.input);
    total_micro_second = event.detail.value.input * 1000
    count_down(this);
  },
});