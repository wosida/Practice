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
	cout << a<<endl<<"��China��ÿ����ĸ�������ĸ���ĸ�滻��C����G��h��Ϊl��i��Ϊm��n��Ϊr,a��Ϊe,�õ�Glmre."<<endl<<endl<<endl;
	string b;
	cout << "������һ���ַ�����";
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
	cout << "����Ϊ"<<b;
	return 0;
}