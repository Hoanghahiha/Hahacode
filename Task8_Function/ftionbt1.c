#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float dientich(float r, float pi){
	float s;
	pi=3.14;
	s=r*pi;
	return s;
}
float chuvi(float r,float pi){
	return(2*r*pi);
}
int main(int argc, char *argv[]) {
	float bi, bk;
	bi=3.14;
	
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &bk);
	printf("Dien tich hinh tron la: %f\n", dientich(bk,bi));
	printf("Chu vi hinh tron la: %f\n", chuvi(bk,bi));
	
	return 0;
}
