#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	double y,s;
	cout << "�������˿������õ�����";
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
	cout << "�û�Ӧ�����Ϊ��" << s;

	return 0;
}