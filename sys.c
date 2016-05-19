#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Vvedite tryohznachne chislo n:");
	scanf("%d", &n);
	printf("%o\n", n);
	printf("%x\n", n);
	printf("%d\n", n);

	system("pause");
	return 0;
}
