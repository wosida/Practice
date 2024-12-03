#pragma warning(disable:4996)
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void cfb(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = i; j <= i * n; j += i) {
			printf("%d\t", j);
		}
		printf("\n");
	}
}
int main() {
	/*time_t t;
	srand((unsigned)time(&t));*/
	cfb(rand()%(14)+7);
}