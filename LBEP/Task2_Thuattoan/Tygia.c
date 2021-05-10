#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int USD;
	int VND;
	
	printf("Chuong trinh chuyen doi ti gia dong USD sang VND\n");
	printf("Nhap gia tri USD ban co: ");
	scanf("%d", &USD);
	
	VND = USD*22000;
	
	printf("So tien VND ban co la: %d ", VND);
	
	return 0;
}
