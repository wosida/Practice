#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	int b = 0, c = 0, d = 0, e = 0;
	int i;
	cout << "������һ���ַ�����";
	getline(cin, a);
	for (i = 0; i < a.size(); i++) {
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
			b += 1;
		else if (a[i] == ' ')
			c++;
		else if (a[i] >= '0' && a[i] <= '9')
			d++;
		else e++;
	}
	cout << "�ַ�����Ӣ����ĸ�ĸ���Ϊ" << b << endl << "�ո����Ϊ" << c << endl << "���ָ���Ϊ" << d << endl << "�����ַ�����Ϊ" << e << endl;

		return 0;
}