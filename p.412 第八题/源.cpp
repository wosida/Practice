#include<iostream>
#include<string>
using namespace std;
class stu {
public:
	string a;
	string e;
	double b;
	stu(string c, string f, double d) {
		a = c;
		e = f;
		b = d;
	}
	stu(const stu& objx) {
		a = objx.a;
		b = objx.b;
		e = objx.e;
	}
};
string max(stu* p) {
	int i ;
	double m;
	m = p->b;
	string k;
	k = p->a;
	for (i = 0; i < 10; i++) {
		if ((p + i)->b > m) {
			m = (p + i)->b;
			k = (p + i)->a;
		}
	}
	return k;
}
int main() {
	stu x[10] = { stu("CSU000","С��",56),stu("CSU111","С��",60),stu("CSU222","С��",68),stu("CSU333","С��",78),stu("CSU444","С��",87.5),
		stu("CSU555","С��",95.5),stu("CSU666","С��",78.5),stu("CSU777","С��",89.9),stu("CSU888","С��",90.7),stu("CSU999","С��",98.6)};
	stu* p;
	string l;
	p = x;
	l=max(p);
	cout << l << endl;
	int i;
	for (i = 0; i < 10; i++) {
		if ((p + i)->a == l) {
			stu diyi = x[i];
			cout << diyi.a <<endl<< diyi.e <<endl<< diyi.b;
		}
	}
	return 0;
}
