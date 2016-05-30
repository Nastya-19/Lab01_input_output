#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a = 1, b = 2,c;
	printf("A = %d\nY = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("Pominani miscami:\n");
	printf("A = %d\nY = %d", a, b);
	
	return 0;
}
