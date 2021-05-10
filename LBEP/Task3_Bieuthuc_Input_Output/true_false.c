#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=5, b=6, c=7;
	printf("Cho a=5, b=6, c=7\n");
	printf("Ket qua cua a>b la %d\n", a>b);
	printf("Ket qua cua b<c la %d\n", b<c);
	printf("Ket qua cua a+b>=c la %d\n", a+b>=c);
	printf("Ket qua cua a>100||b<50 = %d", a>100||b<50);
	return 0;
}
