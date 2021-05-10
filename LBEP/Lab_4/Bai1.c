#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i;
	
	printf("Nhap vao mot ky tu: ");
	scanf("%c", &i);
	
	printf("Ma ASCII cua ky tu '%c' la: %d", i,i);
	return 0;
}
