#pragma warning(disable:4996)
#include<stdio.h>
int s (char *p, char a) 
{
	int count = 0;
	for (; *p != 0; p++){
		count++;
		if (a == *p)
			break;
	}
	if (*(p + 1) == 0) {
		return 0;
	}
	else {
		return count;
	}
}
int main() {
	char str[100] = { '\0' },a='\0';
	char* p;
	printf("请输入字符串：");
	gets(str);
	p = str;
	printf("请输入要查询的字符：");
	scanf("%c", &a);
	printf("\n");
	if (s(p, a) == 0) {
		printf("error");
	}
	else {
		printf("查询的字符首次出现在字符串的第%d个位置。\n\n", s(p, a));
	}
}
