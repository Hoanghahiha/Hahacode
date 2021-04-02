#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int h;
	int S;
	
	printf("Nhap vao do dai chieu cao tam giac: ");
	scanf("%d", &h);
	
	printf("Nhap vao do dai canh day tam giac: ");
	scanf("%d", &a);
	
	S = (a*h)/2;
	printf("Dien tich tam giac tren la: %d", S);
	return 0;
}
