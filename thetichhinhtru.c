#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float V;
	float r;
	float h;
	
	printf("Nhap do dai ban kinh day hinh tru: ");
	scanf("%1f", &r);
	
	printf("Nhap do dai chieu cao hinh tru: ");
	scanf("%1f", &h);
	
	V = 3.14*r*r*h;
	printf("The tich cua hinh tru tren bang: %.1f", V);
	return 0;
}
