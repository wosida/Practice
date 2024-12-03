#include<stdio.h>
int main() {
	double x = -100;
	float y = -100;
	long z = -100; 
	int i = -100;
	short h = -100;
	char g = -100;
	unsigned char* p;
	p = (unsigned char*)&x;
	printf("%02X %02X %02X %02X %02X %02X %02X %02X\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4), *(p + 5), *(p + 6), *(p + 7));
	p = (unsigned char*)&y;
	printf("%02X %02X %02X %02X\n", *p, *(p + 1), *(p + 2), *(p + 3));
	p = (unsigned char*)&z;
	printf("%02X %02x %02X %02X\n", *p, *(p + 1), *(p + 2), *(p + 3));
	p = (unsigned char*)&i;
	printf("%02X %02X %02X %02X\n", *p, *(p + 1), *(p + 2), *(p + 3));
	p = (unsigned char*)&h;
	printf("%02X %02X\n", *p, *(p + 1));
	p = (unsigned char*)&g;
	printf("%02X\n", *p);
	return 0;

}