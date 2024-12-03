#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	printf("请输入五个数字：\n");
	int i, j, k, a[5];
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	for(i=0;i<4;i++)
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	for (i = 0; i < 5; i++)
		printf("%d\t", a[i]);
	return 0;
}