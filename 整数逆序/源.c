#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int digit;
	while (x > 0) {
		digit = x % 10;
		printf("%d", digit);
		x /= 10;
	}
}