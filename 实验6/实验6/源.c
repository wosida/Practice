#pragma warning(disable:4996)
#include<stdio.h>
int f(int x, int y) {
	int t,i;
	if (x > y) {
		t = x;
		x = y;
		y = t;
	}
	for (i = x; i >=1; i--) {
		if ((x % i == 0) && (y % i == 0)) break;
	}
	return i;
}
int g(int x, int y) {
	int t, i;
	if (x > y) {
		t = x;
		x = y;
		y = t;
	}
	for (i = y; i <= x * y; i++) {
		if ((i % x == 0) && (i % y == 0)) break;
	}
	return i;
}
int inNumber() {
	int i;
	printf("请输入一个整数：");
	scanf("%d", &i);
	if (i > 0) return i;
	while (i <= 0) {
		printf("请重新输入：");
		scanf("%d", &i);
	}
	return i;
}
int main() {
	int a,b,c,d;
	a = inNumber();
	b = inNumber();
	c=f(a, b);
	d = g(a, b);
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
	return 0;
}