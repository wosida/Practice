#pragma warning (disable:4996)
#include <stdio.h>
int strcmp(char* p1, char* p2) {
	int i, k, isprime = 1;
	for (i = 0; i < 200; i++) {
		if ((*p1 + i) == *(p2 + i) && (i = 199))
			isprime = 0;
	}
	for (i = 0; i < 200; i++) {
		if (*(p1 + i) != *(p2 + i))
			k = i;
	}
	if (isprime = 0)
		return 0;
	else return(*(p1 + k) - *(p2 + k));
}
	
int main() {
	int n;
	char str1[200] = { '\0' }, str2[200] = { '\0' };
	gets(str1);
	gets(str2);
	printf("%d\n", strcmp(str1, str2));
}/*while (*(p1 + i) == *(p2 + i))
		if (*(p1 + i++) == '\0')
			return 0;
	return (*(p1 + i) - *(p2 + i));*/
