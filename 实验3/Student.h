#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<string>
#include<iostream>
using namespace std;
class Student
{
	string num;
	string name;
	string sex;
	double grade[3];
	double pcj;
public:
	Student();
	Student(int a);
	~Student();
	void ave();
	friend void ave1(Student* p, int n);
	friend void ave2(Student* p, int n);
	friend void ave3(Student* p, int n);
	friend void rand(Student* p, int n);
	friend void findbynum(Student* p, int n);
	friend void findbyname(Student* p, int n);
};

#endif