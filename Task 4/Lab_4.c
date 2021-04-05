#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int DoC;
	float F;
	
	printf("Nhap vao gia tri do C: ");
	scanf("%d", &DoC);
	
	F= 1.8*DoC +32;
	printf("Gia tri do F la: %.1f doF", F);
	return 0;
}
