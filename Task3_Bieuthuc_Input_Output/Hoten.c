#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char A[20],B[20];
	printf("Nhap vao ho cua ban: ");
	scanf("%s", &A);
	printf("\nNhap vao ten cua ban: ");
	scanf("%s", &B);
	
	printf("Ten cua ban la: %s %s", A,B);
	return 0;
}
