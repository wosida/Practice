#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	int i;
	int isprime = 1;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isprime = 0;
			break;
		}
	}
	if (isprime == 1) {
		printf("是素数");
	}else {
		printf("不是素数");
	}
	
}