#include "iostream"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Print.h"
using namespace std;
int main()
{
	bool exit = 0;//是否退出系统的参数，0继续计算，1退出。
	while (1)//可以进行反复计算。
	{
		bool unit = 0;//定义长度的单位，0为厘米，1为英寸。
		cout << "请确定长度单位，按0为厘米，按1为英寸（默认为厘米）:" << endl;
		cin >> unit;
		cout << endl;
		cout << "请输入您需要计算的图形类别：" << endl;
		cout << "1、圆形" << "        " << "2、正方形" << "        " << "3、长方形" << "        " << "4、三角形"<<endl;
		int shape;//图形形状参数
		double radius, sideLength, length, width, height, bottom;
		cin >> shape;


		if (shape == 1)
		{
			cout << "您已选择了圆形。请输入其半径的大小:";
			while (1)
			{
				cin >> radius;
				if (radius < 0)
				{
					cout << "不符合要求，请输入大于0的半径！" << endl;
				}
				else break;
			}
			Circle circle(radius,unit);
			show(shape, circle.getRadius(), 0, 0, 0, 0, 0, circle.area());
			cin >> exit;
			outOrIn(exit);
		}


		if (shape == 2)
		{
			cout << "您以选择了正方形。请输入其边长的大小：";
			while (1)
			{
				cin >> sideLength;
				if (sideLength < 0)
				{
					cout << "不符合要求，请输入大于0的边长！" << endl;
				}
				else break;
			}
			Square square(sideLength,unit);
			show(shape, 0, square.getSideWidth(), 0, 0, 0, 0, square.area());
			cin >> exit;
			outOrIn(exit);
		}


		if (shape == 3)
		{
			cout << "您已选择了长方形。请分别输入其长和宽的大小：";
			while (1)
			{
				cin >> length >> width;
				if (length < 0 || width<0)
				{
					cout << "不符合要求，请输入大于0的长和宽！" << endl;
				}
				else break;
			}
			Rectangle rectangle(length, width,unit);
			show(shape, 0, 0, rectangle.getLength(), rectangle.getWidth(), 0, 0, rectangle.area());
			cin >> exit;
			outOrIn(exit);
		}


		if (shape == 4)
		{
			cout << "您已选择了三角形。请分别输入其底和高的大小：";
			while (1)
			{
				cin >> bottom>> height;
				if (bottom < 0 || height<0)
				{
					cout << "不符合要求，请输入大于0的长和宽！" << endl;
				}
				else break;
			}
			Triangle triangle(bottom, height, unit);
			show(shape, 0, 0, 0, 0, triangle.getBottom(), triangle.getHeight(), triangle.area());
			cin >> exit;
			outOrIn(exit);
		}
	}
	return 0;
}