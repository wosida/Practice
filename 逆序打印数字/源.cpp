#include<iostream>
#include<string>
using namespace std;
int main() {
	int num;
	int count=0;
	int m;
	int i;
	int a[5];
	cout << "请输入一个不多于5位的数字：";
	cin >> num;
	while (num <= 0 || num >= 99999) {
		cout << "输入有误，请重新输入：";
		cin >> num;
	}
	m = num;
	while (m > 0) {
		count++;
		m /= 10;
	}
	cout << "该数的位数是" << count<<endl;
	m = num;
	for (i = 0; i < count; i++) {
		a[i] = m % 10;
		m /= 10;
	}
	i -= 1;
	cout << "从高到低每一位数字分别是：";
	for (; i >= 0; i--) {
		cout << a[i]<<' ';
	}
	cout << endl << "逆序打印应为：";
	for (i = 0; i < count; i++) {
		cout << a[i];
	}
	return 0;
}