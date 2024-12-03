#include"Date.h"
int main() {
	cout << "请输入一个日期的年月日：";
	Date A, B;
	Date C;
	A.Set();
	cout << "请输入想要在此日期上相加和相减的天数：";
	int a, b;
	cin >> a >> b;
	cout << "该日期加上和减去相应天数对应的日期分别为："<<endl;
	C = A+a;
	C.show();
	C = A-b;
	C.show();
	cout << "请输入另一个日期，接下来将为您计算两日期间相差的天数：";
	B.Set();
	int c;
	c = A-B;
	cout << "两日期相差天数为：";
	cout <<c;
	return 0;
}