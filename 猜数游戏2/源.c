#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮������֡�");
	do {
		printf("������1��100֮�������");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("��µ�������Ŷ");
		}
		else  if(a<number) {
			printf("��µ���С��Ŷ");
		}
	} while (a != number);
		printf("̫������������%d�ξͲ�������\n", count);
}