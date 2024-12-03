#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main() {
	double a, b, c,s,m=0;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		s = 1.0 * (a + b + c) / 2;
		m = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << m;
	}
	else cout << "ÊäÈë´íÎó" ;
	return 0;
}