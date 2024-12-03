#pragma warning(disable:4996)
#include <stdio.h>
#include<string.h>
void inv(char * x, int n) {
	char t, * p, * i, * j;
		int m = (n - 1) / 2;
	i = x;
	j = x + n - 1;
	p = x + m;
	for (; i <= p; i++, j--) {
		t = *i;
		*i = *j;
		*j = t;
	}
}
int main() {
	 char str[100]={'\0'}, i;
	 printf("ÊäÈë×Ö·û´®£º\n");
	 gets(str);
	 i = strlen(str);
	 inv(str, i);
	 printf("%s\n", str);
	return 0;
}