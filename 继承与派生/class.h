#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#pragma warning(disable:6031)
using namespace::std;
class person {
public:
	string name;
	string sex;
	int age;
public:
	person() {
		cin >> name >> sex >> age;
	}
};
class teacher :public virtual person {
public:
	string worknum;
private:
	string title;
	double salary;
public:
	string gettitle();
	double getsalary();
	void intitle();
	void insalary();
	teacher();
	teacher(int);
	void display();
	void set();
};
class student :public virtual person {
public:
	string stunum;
	string cla;
	string major;
	double grade;
public:
	student();
	student(int);
	void display();
	void set();
};
class readteacher :public teacher, public student {
public:
	readteacher();
	void display();
	void set();
};
class workstudent :public student, public teacher {
	string workplace;
public:
	workstudent();
	void display();
	void set();
};