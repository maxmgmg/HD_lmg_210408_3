#include<stdio.h>
void main() {
	for (int a = 0; a < 4; a++) {
		printf("*\n");
		for (int b = 0; b <= a+1; b++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}