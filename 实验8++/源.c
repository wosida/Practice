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
	printf("�������ַ�����");
	gets(str);
	p = str;
	printf("������Ҫ��ѯ���ַ���");
	scanf("%c", &a);
	printf("\n");
	if (s(p, a) == 0) {
		printf("error");
	}
	else {
		printf("��ѯ���ַ��״γ������ַ����ĵ�%d��λ�á�\n\n", s(p, a));
	}
}
