#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	float b[3][4], s[4], a[4];
	int i, j;
	printf("������3��ͬѧ4�Ƶĳɼ���");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%f", &b[i][j]);
		}
	}printf("�ĿƵ�ƽ���ɼ��ֱ���");
	//	s[0] = 0;
	for (j = 0; j < 4; j++) {
		s[j] = 0;   /*��ά�����ۼӷ�ע����s[j]=0��λ��*/
		for (i = 0; i < 3; i++) {
			//s[j]=0;
			s[j] += b[i][j];

		}
		a[j] = s[j] / 3;
		printf("%.2f\n", a[j]);
	}

	}

