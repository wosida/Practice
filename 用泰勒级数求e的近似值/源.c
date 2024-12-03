#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>
int fac(int n) {
	int fac=1,i;
	for (i = 1; i <= n; i++) {
		fac *= i;
	}
	return fac;
}
int main() {
	int  n;
	double e = 1;
	double eps = 0.000001;
	for (n = 1; fabs(1.0/ fac(n) - 0 >= eps); n++) {
		e += 1.0 / fac(n);
	}
	printf("%lf", e);
}