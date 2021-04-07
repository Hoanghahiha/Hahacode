#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i;
	printf("Nhap vao mot ki tu: ");
	i=getchar();
	printf("Ma ASCII cua ki tu '%c' la: %d", i,i);
	return 0;
}
