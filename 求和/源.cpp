#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	int flag = 0;
	int sum=0;
	cin >> n;
	while (n < 50 || n>10000) {
		if (flag >= 3) {
			cout << "end!";
			break;
		}
		cout << "输入错误，重新输入：";
		cin >> n;
		flag++;
	}
	if (n >= 50 && n <= 10000) {
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		cout << sum;
	}
	return 0;
}