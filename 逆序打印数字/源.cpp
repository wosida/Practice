#include<iostream>
#include<string>
using namespace std;
int main() {
	int num;
	int count=0;
	int m;
	int i;
	int a[5];
	cout << "������һ��������5λ�����֣�";
	cin >> num;
	while (num <= 0 || num >= 99999) {
		cout << "�����������������룺";
		cin >> num;
	}
	m = num;
	while (m > 0) {
		count++;
		m /= 10;
	}
	cout << "������λ����" << count<<endl;
	m = num;
	for (i = 0; i < count; i++) {
		a[i] = m % 10;
		m /= 10;
	}
	i -= 1;
	cout << "�Ӹߵ���ÿһλ���ֱַ��ǣ�";
	for (; i >= 0; i--) {
		cout << a[i]<<' ';
	}
	cout << endl << "�����ӡӦΪ��";
	for (i = 0; i < count; i++) {
		cout << a[i];
	}
	return 0;
}