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
	printf("我已经想好了一个1到100之间的数字。");
	do {
		printf("请猜这个1到100之间的数：");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的数大了哦");
		}
		else  if(a<number) {
			printf("你猜的数小了哦");
		}
	} while (a != number);
		printf("太棒啦！你用了%d次就猜中啦！\n", count);
}