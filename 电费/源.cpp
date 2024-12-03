#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	double y,s;
	cout << "请输入人口数和用电量：";
    cin >> n >> y;
	double m;
	m = 1.0*y/ n;
	if (m <= 20) {
		s = 1.0*(0.6 * m*n);
	}
	else if (m > 20 && m <= 30) {
		s = 1.0*(1.0*n * (12 + 1.0 * (m - 20)));
	}
	else if (m > 30) {
		s = 1.0*(1.0*n * (12 + 10 + 2.0 * (m - 30)));
	}
	cout << "该户应交电费为：" << s;

	return 0;
}