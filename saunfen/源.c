#pragma warning(disable:4996)
#include<stdio.h>
double aver(double a[4][5]) {
	return ((a[0][0] + a[1][0] + a[2][0] + a[3][0]) / 4);
}
void found(double a[4][5],char b[4][10]) {
	int i, j,count=0;
	double k=0;
	for (i = 0; i < 4; i++) {
		k = 0;
		count = 0;
		for (j = 0; j < 5; j++) {
			k += a[i][j];
			if (a[i][j] < 60)
				count++;
		}
		if (count >= 2) {
			printf("%s:", b[i]);
			for (j = 0; j < 5; j++)
				printf("%lf ", a[i][j]);
			printf("%lf", k/5);
			printf("\n");
		}
	}
	
}
int main() {
	char course[4][10] = { '\0' };
	double score[4][5]={'\0'}, k;
	int i, j;
	for ( i = 0; i < 4; i++) {
		printf("�����%d��ѧ����ѧ�ţ�", i + 1);
		scanf("%s", course[i]);
		printf("\n");
	}
	for (i = 0; i < 4; i++) {
		printf("�������%d��ѧ�������ųɼ���", i + 1);
		for (j = 0; j < 5; j++) {
			scanf("%lf", &score[i][j]);
		}
	}
	k=aver(score);
	printf("��һ�ſγ̵�ƽ���ɼ�Ϊ%lf\n", k);
	 found(score, course);
}