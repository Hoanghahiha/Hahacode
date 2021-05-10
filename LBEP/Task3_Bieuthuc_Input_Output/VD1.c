#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p,n,r,A;
	
	printf("Nhap vao tien von: ");
	scanf("%f", &p);
	
	printf("Nhap vao so nam: ");
	scanf("%f", &n);
	
	printf("Nhap vao ti le lai xuat: ");
	scanf("%f", &r);
	
	A = p*n*r/100;
	printf("Tien lai bang: %f", A);
	return 0;
}
