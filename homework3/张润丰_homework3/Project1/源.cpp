#include "iostream"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Print.h"
using namespace std;
int main()
{
	bool exit = 0;//�Ƿ��˳�ϵͳ�Ĳ�����0�������㣬1�˳���
	while (1)//���Խ��з������㡣
	{
		bool unit = 0;//���峤�ȵĵ�λ��0Ϊ���ף�1ΪӢ�硣
		cout << "��ȷ�����ȵ�λ����0Ϊ���ף���1ΪӢ�磨Ĭ��Ϊ���ף�:" << endl;
		cin >> unit;
		cout << endl;
		cout << "����������Ҫ�����ͼ�����" << endl;
		cout << "1��Բ��" << "        " << "2��������" << "        " << "3��������" << "        " << "4��������"<<endl;
		int shape;//ͼ����״����
		double radius, sideLength, length, width, height, bottom;
		cin >> shape;


		if (shape == 1)
		{
			cout << "����ѡ����Բ�Ρ���������뾶�Ĵ�С:";
			while (1)
			{
				cin >> radius;
				if (radius < 0)
				{
					cout << "������Ҫ�����������0�İ뾶��" << endl;
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
			cout << "����ѡ���������Ρ���������߳��Ĵ�С��";
			while (1)
			{
				cin >> sideLength;
				if (sideLength < 0)
				{
					cout << "������Ҫ�����������0�ı߳���" << endl;
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
			cout << "����ѡ���˳����Ρ���ֱ������䳤�Ϳ�Ĵ�С��";
			while (1)
			{
				cin >> length >> width;
				if (length < 0 || width<0)
				{
					cout << "������Ҫ�����������0�ĳ��Ϳ�" << endl;
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
			cout << "����ѡ���������Ρ���ֱ�������׺͸ߵĴ�С��";
			while (1)
			{
				cin >> bottom>> height;
				if (bottom < 0 || height<0)
				{
					cout << "������Ҫ�����������0�ĳ��Ϳ�" << endl;
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