#pragma once
#include"iostream"
#include"iomanip"
using namespace std;
/*
* ��ʾ�������ͼ�����ͣ��û�����ĳ��ȣ���������Ϊ��λ�����Լ����������������ƽ��������Ϊ��λ����
* shape:��״����
* radius:Բ�εİ뾶
* sideWidth:�����εı߳�
* length:�����εĳ�
* width:�����εĿ�
* bottom:�����εĵ�
* height:�����εĸ�
* area: ͼ�����
*/
void show(int shape, double radius = 0, double sideWidth = 0, double length = 0, double width = 0, double bottom = 0, double height = 0, double area = 0)
{
	cout << endl;
	if (shape == 1)
	{
		cout << "��Բ�İ뾶Ϊ" << fixed << setprecision(3) << radius;
		cout << "����,�������õ����Ϊ" << fixed << setprecision(3) << area;
		cout << "ƽ�����ס�" << endl << endl;
	}
	if (shape == 2)
	{
		cout << "�������εı߳�Ϊ��" << fixed << setprecision(3) << sideWidth;
		cout << "���ף��������õ����Ϊ" << fixed << setprecision(3) << area;
		cout << "ƽ�����ס�" << endl << endl;
	}
	if (shape == 3)
	{
		cout << "�ó����εĳ�Ϊ��" << fixed << setprecision(3) << length;
		cout << "���ף���Ϊ��" << fixed << setprecision(3) << width;
		cout << "���ף����Ϊ��";
		cout << fixed << setprecision(3) << area << "ƽ�����ס�" << endl;
	}
	if (shape == 4)
	{
		cout << "�������εĵ�Ϊ��" << fixed << setprecision(3) << bottom;
		cout << "���ף���Ϊ��" << fixed << setprecision(3) << height;
		cout << "���ף����Ϊ��";
		cout << fixed << setprecision(3) << area << "ƽ�����ס�" << endl;
	}
	cout << "��0�������㣬��1�˳�����" << endl << endl;
}

/*
* ѡ���Ƿ��˳�����
* exit: �����˳��Ĳ����Ͳ���
*/
int outOrIn(bool exit=0)
{
	if (exit)
		return 0;
}

