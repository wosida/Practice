#include"class.h"
teacher::teacher() {
	cin >> worknum >> title >> salary;
}
teacher::teacher(int k){
	cin >> title >> salary;
	worknum = "0";
}
void teacher::display() {
	cout << name << " " << sex << " " << age << " " << worknum << " " << title << " " << salary << endl;
}
void teacher::set() {
	cin >> name >> sex >> age >> worknum >> title >> salary;
}
string teacher::gettitle() {
	return title;
}
double teacher::getsalary() {
	return salary;
}
void teacher::intitle() {
	cin >> title;
}
void teacher::insalary() {
	cin >> salary;
}
student::student() {
	cin >> stunum >> cla >> major >> grade;
}
student::student(int k) {
	cin >> cla >> major >> grade;
	stunum = "0";
}
void student::display() {
	cout << name << " " << sex << " " << age << " " << stunum << " " << cla << " " << major <<" "<<grade<< endl;
}
void student::set() {
	cin >> name >> sex >> age >> stunum >>cla>> major >> grade;
}
readteacher::readteacher():teacher(),student(0) {
	
}
void readteacher::display() {
	cout << name << " " << sex << " " << age << " " << worknum << " " << gettitle() << " " << getsalary() <<" "<<cla<<" "<<major<<" "<<grade<<endl;
}
void readteacher::set() {
	cin>> name >> sex>> age >>worknum;
	intitle();
	insalary();
	cin >> cla >> major >> grade;
}
workstudent::workstudent():student(),teacher(0) {
	cin >> workplace;
}
void workstudent::display() {
	cout << name << " " << sex << " " << age << " " << stunum << " " << cla << " " << major << " " << grade <<gettitle()<<" "<<getsalary()<<" "<<workplace<<endl;
}
void workstudent::set() {
	cin >> name >> sex >> age >> worknum >> cla >> major >> grade;
	intitle();
	insalary();
	cin >> workplace;
}