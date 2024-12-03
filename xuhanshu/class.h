#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Point {
public:
	float x, y;
	void set() {
		cin >> x >> y;
	}
};
class Plane {
public:
	virtual float area() = 0;
	virtual float girth() = 0;
};
class Rectangle:public Plane {
	float a, b;
public:
	Rectangle() {
		cout << "��������������ĳ���";
		cin >> a;
		cout << "��������������Ŀ�";
		cin >> b;
		cout << "�����������ĸߣ�";
	}
	virtual float area() {
		return a * b;
	}
	virtual float girth() {
		return 2 * (a + b);
	}
};
class Circle :public Plane{
	float a;
public:
	Circle(){
		cout << "����Բ���뾶��";
		cin >> a;
		cout << "����Բ���ĸߣ�";
	}
	virtual float area() {
		return 3.14 * a * a;
	}
	virtual float girth() {
		return 3.14 * 2 * a;
	}
};
class Triangle :public Plane{
	Point A, B, C;
public:
	Triangle() {
		cout << "�������������涥��A�ģ�x y)���꣺";
		A.set();
		cout << "�������������涥��B�ģ�x y)���꣺";
		B.set();
		cout << "�������������涥��C�ģ�x y)���꣺";
		C.set();
		cout << "�����������ĸߣ�";
	}
	virtual float area() {
		float a;
		a = (A.x * B.y + A.y * C.x + B.x * C.y - A.x * C.y - A.y * B.x - B.y * C.x) / 2;
		if (a > 0)
			return a;
		else return(-a);
	}
	virtual float girth() {
		float b;
		b = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)) + sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y)) + sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
		return b;
	}

};
class Body {
	Plane* pbasic;
	float high;
public:
	Body() {
		cin >> high;
		pbasic=NULL;
	}
	void TO1(Rectangle obj) {
		pbasic = &obj;
	}
	void TO2(Circle obj) {
		pbasic = &obj;
	}
	void TO3(Triangle obj) {
		pbasic = &obj;
	}
	float volume() {
		return (pbasic->area() * high);
	}
	float surfaceArea() {
		return (pbasic->girth() * high + 2 * pbasic->area());
	}
};