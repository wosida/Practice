#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p,s;       /*定义五个实型变量*/
	printf("inputa,b,c:\n");   /*给出输入提示*/
	scanf("%lf %lf %lf", &a, &b, &c); /*输入a,b,c的值*/
	p = (a + b + c) / 2;           /*计算p*/
	s = sqrt(p*(p - a)*(p - b)*(p - c)); /*计算s*/
	printf("s=%lf\n", s);       /*输出s的值*/
	return 0;

}
