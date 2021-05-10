#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,C;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &A);
	
	printf("Nhap vao so thu hai: ");
	scanf("%d", &B);
	
	printf("Nhap vao so thu ba: ");
	scanf("%d", &C);
	
	if(A>B && A>C)
	printf("So thu nhat lon nhat");
	else if(B>A && B>C)
	printf("So thu hai lon nhat");
	else
	printf("So thu ba lon nhat");
	return 0;
}
