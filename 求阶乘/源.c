#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int n,a;
	printf("����1��10���һ�����֣�");
	scanf("%d", &n);
	int fact = 1;
	int Sn = 0;
	//int i = 1;
	for (a = 1; a <= n; a++) {
		for (int i = 1; i <= a; i++) {
			fact *= i;
		}
		Sn += fact;
		fact = 1;
	}
	printf("%d", Sn);
}