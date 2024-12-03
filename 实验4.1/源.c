#pragma warning(dsiable:4996)
#include<stdio.h>
int main() {
	int x, y, z, s;
	x = 1; y = 1; z = 2; s = 0;
	
	while (x < 100) {
		while (y < 100) {
			while (z < 100) {
				if ((x + y + z == 100) && (3 * x + y * 2 + z / 2 == 100)) {
					s++;
					printf("大马%d匹，中马%d匹，小马%d匹\n", x, y, z);
				}
			 z += 2;
			}
			y++;
			z = 2;
		}
		x++;
		y = 1;
		z = 2;
	}
	printf("%d\n", s);

	x = 0, y = 0; z = 0, s = 0;
	do {
		do {
			do {
				if (x + y + z == 100 && 3 * x + y * 2 + z / 2 == 100) {
					s++;
					printf("大马%d匹，中马%d匹，小马%d匹\n",x, y, z);
				}
				z += 2;
			} while (z < 100);
			y ++; z = 2;
		} while (y < 100);
		x++; y = 0; z = 2;
	}while(x < 100);
	printf("%d\n", s);

	s = 0;
	for(x=1;x<100;x++)
		for(y=1;y<100;y++)
			for (z = 2; z < 100; z+=2) {
				if (x + y + z == 100 && 3 * x + y * 2 + z / 2 == 100) {
					s++;
					printf("大马%d匹，中马%d匹，小马%d匹\n", x, y, z);
				}
			}
	printf("%d\n", s);
	 
	s = 0;
	for(x=0;x<100;x++)
		for(y=0;y<100;y++)
			for (z = 0; z < 100; z += 2) {
				if (x + y + z == 100 && 3 * x + y * 2 + z / 2 == 100) {
					s++;
					printf("大马%d匹，中马%d匹，小马%d匹\n", x, y, z);
				}
			}
	printf("%d", s);

}