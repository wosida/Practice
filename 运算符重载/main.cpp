#include"Date.h"
int main() {
	cout << "������һ�����ڵ������գ�";
	Date A, B;
	Date C;
	A.Set();
	cout << "��������Ҫ�ڴ���������Ӻ������������";
	int a, b;
	cin >> a >> b;
	cout << "�����ڼ��Ϻͼ�ȥ��Ӧ������Ӧ�����ڷֱ�Ϊ��"<<endl;
	C = A+a;
	C.show();
	C = A-b;
	C.show();
	cout << "��������һ�����ڣ���������Ϊ�����������ڼ�����������";
	B.Set();
	int c;
	c = A-B;
	cout << "�������������Ϊ��";
	cout <<c;
	return 0;
}