#pragma warning(disable:4996)
#include <stdio.h>
//void swap(int a[][5], int i, int j, int b, int c)
//{
//	int t;
//	t = a[b][c];
//	a[b][c] = a[i][j];
//	a[i][j] = t;
//}
//
//void search(int a[][5])
//{
//	static int b = 0;
//	static int c = 0;
//	static int count = 0;
//	int j, i;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (count == 1 && i == 0 && j == 0)
//				continue;
//			if (count == 2 && i == 0 && (j == 4||j==0))
//				continue;
//			if (count == 3 &&( i == 4||i==0)&& (j == 4 || j == 0))
//				continue;
//			if (a[b][c] > a[i][j])
//			{
//				swap(a, i, j, b, c);
//			}
//		}
//	}
//	count++;
//	switch (count)
//	{
//	case 1:c = 4; break;
//	case 2:b = 4; c = 0; break;
//	case 3:c = 4; break;
//	}
//}

//#include<stdio.h>
void f(int a[5][5]) {
	int i, j,t,max,min;
	max = a[0][0];
	for(i=0;i<5;i++)
		for (j = 0; j < 5; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
	t = max;
	max = a[2][2];
	a[2][2] = t;

	min = a[0][0];
	for(i=0;i<5;i++)
		for (j = 0; j < 5; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
	t = min;
	min = a[0][0];
	a[0][0] = t;

	min = a[0][1];
	for(i=0;i<5;i++)
		for (j = 1; j < 5; j++) {
			if (a[i][j < min]) {
				min = a[i][j];
			}
		}
	t = min;
	min = a[0][4];
	a[0][4] = t;
	
	min = a[1][0];
	for(i=1;i<5;i++)
		for (j = 1; j < 5; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
	if (a[0][1] < min)
		min = a[0][1];
	if (a[0][2] < min)
		min = a[0][2];
	if (a[0][3] < min)
		min = a[0][3];
	t = min;
	min = a[0][4];
	a[0][4] = t;

	min = a[1][0];
	for (i = 1; i < 4; i++) 
		for (j = 0; j < 5; j++) {
			if (a[i][i] < min)
				min = a[i][j];
		}
	if (a[0][1] < min)
		min = a[0][1];
	if (a[0][2] < min)
		min = a[0][2];
	if (a[0][3] < min)
		min = a[0][3];
	if (a[4][1] < min)
		min = a[4][1];
	if (a[4][2] < min)
		min = a[4][2];
	if (a[4][3] < min)
		min = a[4][3];
	t = min;
	min = a[4][0];
	a[4][0] = t;

	min = a[1][0];
	for (i = 1; i < 5; i++)
		for (j = 0; j < 5; j++) {
			if (a[i][i] < min)
				min = a[i][j];
		}
	if (a[0][1] < min)
		min = a[1][0];
	if (a[0][2] < min)
		min = a[0][2];
	if (a[0][3] < min)
		min = a[0][3];
	t = min;
	min = a[4][4];
	a[4][4] = t;
}
int main() {
	int a[5][5], i, j;
		for(i=0;i<5;i++)
			for (j = 0; j < 5; j++) {
				scanf("%d", &a[i][j]);
			}
	/*	search(a);
		search(a);
		search(a);
		search(a);*/
		f(a);
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}
}