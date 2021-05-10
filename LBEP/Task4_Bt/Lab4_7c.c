#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s,c,r;
	int a,sv,cv;
	int e,d,sn,cn;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%d", &r);
	s=r*r*3.14;
	c=2*r*3.14;
	
	printf("Dien tich hinh tron bang: %d\n", s);
	printf("Chu vi hinh tron bang: %d\n", c);
	 
	printf("Nhap vao do dai canh hinh vuong: ");
	scanf("%d", &a);
	sv= a*a;
	cv=4*a;
	printf("Dien tich hinh vuong la: %d\n", sv);
	printf("Chu vi hinh vuong la : %d\n", cv);
	
	printf("Nhap vao chieu dai HCN: ");
	scanf("%d", &c);
	printf("Nhap vao chieu rong HCN: ");
	scanf("%d", &d);
	sn= e*d;
	cn= 2*(e+d);
	printf("Dien tich hinh chu nhat bang: %d\n", sn);
	printf("Chu vi hinh chu nhat bang: %d", cn);
	
	
	
	return 0;
}



