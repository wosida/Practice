#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int i, j ,a[5],k;
	printf("ÇëÊäÈë5¸öÊı×Ö£º\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	//printf("\n");
	for(j=0;j<4;j++)
		for(i=0;i<4-j;i++)
			if (a[i] > a[i + 1]) {
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
	for (i = 0; i < 4; i++)
		printf("%d ", a[i]);
	printf("%d", a[4]);
	return 0;
}