#include"class.h"
int main() {
	Circle Y;
	Body M;
	M.TO2(Y);
	cout << "圆柱的体积为：" << M.volume() << endl;
	cout << "圆柱的表面积为：" << M.surfaceArea() << endl << endl;
	Rectangle C;
	Body N;
	N.TO1(C);
	cout << "四棱柱的体积为：" << N.volume() << endl;
	cout << "四棱柱的表面积为：" << N.surfaceArea() << endl << endl;
	Triangle S;
	Body H;
	H.TO3(S);
	cout << "三棱柱的体积为：" << H.volume() << endl;
	cout << "三棱柱的表面积为：" << H.surfaceArea() << endl << endl;
	return 0;
}