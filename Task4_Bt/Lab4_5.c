#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top, bottom, height,S;
	
	printf("Nhap vao do dai day nho: ");
	scanf("%d", &top);
	
	printf("Nhap vao do dai day lon: ");
	scanf("%d", &bottom);
	
	printf("Nhap vao do dai chieu cao: ");
	scanf("%d", &height);
	
	S= (top+bottom)*height/2;
	printf("Dien tich hinh thang la: %dcm2", S);
	return 0;
}
