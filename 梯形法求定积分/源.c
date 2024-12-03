#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
double y(float x) {
	return x * x * x + 2 * x * x + 3 * x;
}
float fun(int a, int b, int n) {
	float sd , xd;
	float x;
	float sum = 0, sum1 = 0;
	x = 1.0*(b - a) / n;
	for (int i = 0, j = 1; i < n; i++, j++) {
		sd = y(a + x * i);
		xd = y(a + x * j);
		sum1 = (sd + xd) * x / 2;
		sum += sum1;
	}
	return sum;
}
int main() {
	int a=0,b=0,n=0;
	float sum;
	while (1) {
		    printf("输入a,b,n:\n");
			scanf("%d %d %d", &a, &b, &n);
			if (a == 0 && b == 0) {
				break;
			}
			sum = fun(a, b, n);
			printf("f(x)在区间（%d,%d)上的定积分为%lf\n",a, b, sum);
			if (a == 0 && b == 0) {
				break;
			}
	}
}