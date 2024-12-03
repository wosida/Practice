#pragma warining (daisable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
	int a[5][5],i=0,j=0,t,max,min,k,l;
	system("cls");
	srand((unsigned)time(0));
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		a[i][j] = rand();
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (j = 0; j < 5; j ++ ) {
		t = a[0][j];
		a[0][j] = a[4][j];
		a[4][j] = t;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j ++ ) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (j = 0; j < 5; j++) {
		t = a[0][j];
		a[0][j] = a[4][j];
		a[4][j] = t;
	}
	for (i = 0; i < 5; i++) {
		max = a[i][0];
		min = a[i][0];
		k = 1; l = 1;
		for (j = 0; j < 5; j++) {
			//max = a[i][j];
			//min = a[i][j];
			if (a[i][j] > max) {
				max = a[i][j];
				k = j + 1;
			}
			else if (a[i][j] < min) {
				min = a[i][j];
				l = j + 1;
			}
		}
		printf("第%d行元素的最大值是%d，它是第%d行第%d列元素\n", i+1, max, i+1, k);
		printf("第%d行元素的最小值是%d，它是第%d行第%d列元素\n\n", i+1, min, i+1, l);
	}
	return 0;
}