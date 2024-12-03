#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	int b = 0, c = 0, d = 0, e = 0;
	int i;
	cout << "请输入一个字符串：";
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
	cout << "字符串中英文字母的个数为" << b << endl << "空格个数为" << c << endl << "数字个数为" << d << endl << "其他字符个数为" << e << endl;

		return 0;
}