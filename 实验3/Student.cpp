#include "Student.h"
#pragma warning(disable:26495)
 Student::Student() {
	 cin >> num;
	 cin >> name;
	 cin >> sex;
	 cin >> grade[0];
	 cin >> grade[1];
	 cin>> grade[2];
	pcj = 0;
}
 Student::~Student() {
	 cout << "本程序由学生李冬阳编写！"<<endl;
 }
 Student::Student(int) {
	 cout << "有参构造函数";
 }
 void Student::ave() {
	double sum=0;
	for (int i = 0; i < 3; i++) {
		sum += grade[i];
	}
	pcj = sum / 3;
}
 void ave1(Student* p, int n) {
	 double sum = 0;
	 double ave1;
	 double max = p[0].grade[0], min = p[0].grade[0];
	 for (int i = 0; i < n; i++) {
		 sum += p[i].grade[0];
		 if (p[i].grade[0] > max) {
			 max = p[i].grade[0];
		 }
		 else min = p[i].grade[0];
	 }
	 ave1 = sum / n;
	 cout << "课程1的平均成绩，最高分，最低分分别为：" << ave1<< " " << max << " " << min << endl;
 }
 void ave2(Student* p, int n) {
	 double sum = 0;
	 double ave2;
	 double max = p[0].grade[1], min = p[0].grade[1];
	 for (int i = 0; i < n; i++) {
		 sum += p[i].grade[1];
		 if (p[i].grade[1] > max) {
			 max = p[i].grade[1];
		 }
		 else min = p[i].grade[1];
	 }
	 ave2 = sum / n;
	 cout << "课程2的平均成绩，最高分，最低分分别为：" << ave2 <<" "<< max <<" "<< min<<endl;
 }
 void ave3(Student* p, int n) {
	 double sum = 0;
	 double ave3;
	 double max = p[0].grade[2], min = p[0].grade[2];
	 for (int i = 0; i < n; i++) {
		 sum += p[i].grade[2];
		 if (p[i].grade[2] > max) {
			 max = p[i].grade[2];
		 }
		 else min = p[i].grade[2];
	 }
	 ave3 = sum / n;
	 cout << "课程3的平均成绩，最高分，最低分分别为：" << ave3 << " " << max << " " << min << endl;
 }
 void rand(Student* p, int n) {
	 for(int j=0;j<n-1;j++)
		 for (int k = 0; k < n-1-j; k++) {
			 if (p[k].pcj < p[k + 1].pcj) {
				 Student temp = p[k];
				 p[k] = p[k + 1];
				 p[k + 1] = temp;
			 }
		 }
	 cout << "学生排名信息如下：" << endl;
	 for (int i = 0; i < n; i++) {
		 cout << p[i].num << " " << p[i].name << " " << p[i].sex << " " << p[i].pcj<<endl;
	 }

 }
 void findbynum(Student* p, int n) {
	 string a;
	 int i;
	 cout << "请输入想要查询学生的学号：";
	 cin >> a;
	 for (i = 0; i < n; i++) {
		 if (a == p[i].num) {
			 cout <<endl<< "已查询到学生信息：" << endl;
			 cout << p[i].num << " " << p[i].name << " " << p[i].sex << " " << p[i].pcj << endl<<endl;
			 break;
		 }
	 }
	 if (i == n) {
		 cout << "未查询到学生信息！";
	 }
 }
 void findbyname(Student* p, int n) {
	 string a;
	 int i;
	 cout << "请输入想要查询学生的姓名：";
	 cin >> a;
	 for (i = 0; i < n; i++) {
		 if (a == p[i].name) {
			 cout << "已查询到学生信息：" << endl;
			 cout << p[i].num << " " << p[i].name << " " << p[i].sex << " " << p[i].pcj << endl;
			 break;
		 }
	 }
	 if (i == n) {
		 cout << "未查询到学生信息！";
	 }
 }