#pragma once
#include<iostream>
using namespace::std;
class Date {
private:
	int day_tab[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31} };
	int year;
	int mouth;
	int day;
	bool leap(int);
	int dton(Date&);
	Date ntod(int);
public:
	Date(int a=0,int b=0,int c=0):year(a),mouth(b),day(c){}
	void Set();
	void show();
	Date operator+(int days);
    Date operator-(int days);
	int operator-(Date& b);
};
