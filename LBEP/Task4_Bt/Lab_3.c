#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,t,h,tich;
	float thuong;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	
	t=a+b;
	h=a-b;
	tich=a*b;
	thuong=(float)a/(float)b;
	
	printf("Tong la: %d\n", t);
	printf("Hieu la: %d\n", h);
	printf("Tich la: %d\n", tich);
	printf("Thuong la: %f\n",thuong);
	
	
	return 0;
}
