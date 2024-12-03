#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	float b[3][4], s[4], a[4];
	int i, j;
	printf("请输入3名同学4科的成绩：");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%f", &b[i][j]);
		}
	}printf("四科的平均成绩分别是");
	//	s[0] = 0;
	for (j = 0; j < 4; j++) {
		s[j] = 0;   /*二维数组累加法注意是s[j]=0的位置*/
		for (i = 0; i < 3; i++) {
			//s[j]=0;
			s[j] += b[i][j];

		}
		a[j] = s[j] / 3;
		printf("%.2f\n", a[j]);
	}

	}

