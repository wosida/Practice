#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p,s;       /*�������ʵ�ͱ���*/
	printf("inputa,b,c:\n");   /*����������ʾ*/
	scanf("%lf %lf %lf", &a, &b, &c); /*����a,b,c��ֵ*/
	p = (a + b + c) / 2;           /*����p*/
	s = sqrt(p*(p - a)*(p - b)*(p - c)); /*����s*/
	printf("s=%lf\n", s);       /*���s��ֵ*/
	return 0;

}
