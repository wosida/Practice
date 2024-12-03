#include<iostream>
#include<string>
using namespace std;
int main() {
	int i;
	char a[] = "China";
	for (i = 0; i < 5; i++) 
	{
		if (a[i] >= 'w' && a[i] <= 'z'||a[i]>='W'&&a[i]<='Z') {
			a[i] -= 22;
		}else
		     a[i] += 4;
	}
	cout << a<<endl<<"将China的每个字母用其后的四个字母替换，C换成G，h换为l，i换为m，n换为r,a换为e,得到Glmre."<<endl<<endl<<endl;
	string b;
	cout << "请输入一个字符串：";
	getline(cin, b);

	for (i = 0; i < b.size(); i++) {
		if (b[i] >= 'w' && b[i] <= 'z' || b[i] >= 'W' && b[i] <= 'Z') {
			b[i] -= 22;
		}
		else if (b[i] == ' ') {
			;
		}else
			b[i] += 4;
		
	}
	cout << "密码为"<<b;
	return 0;
}