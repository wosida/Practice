#include"class.h"
int main() {
	Circle Y;
	Body M;
	M.TO2(Y);
	cout << "Բ�������Ϊ��" << M.volume() << endl;
	cout << "Բ���ı����Ϊ��" << M.surfaceArea() << endl << endl;
	Rectangle C;
	Body N;
	N.TO1(C);
	cout << "�����������Ϊ��" << N.volume() << endl;
	cout << "�������ı����Ϊ��" << N.surfaceArea() << endl << endl;
	Triangle S;
	Body H;
	H.TO3(S);
	cout << "�����������Ϊ��" << H.volume() << endl;
	cout << "�������ı����Ϊ��" << H.surfaceArea() << endl << endl;
	return 0;
}