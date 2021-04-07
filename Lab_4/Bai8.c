#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, dt, x1, x2, x12;
	printf("Nhap vao gia tri cua a: ");
	scanf("%f", &a);
	printf("Nhap vao gia tri cua b: ");
	scanf("%f", &b);
	printf("Nhap vao gia tri cua c: ");
	scanf("%f", &c);
	
	dt= b*b - 4*a*c;
	
	if(dt==0){
		x12= (-b)/(2*a);
		printf("Phuong trinh co nghiem kep x= %f", x12);
	}else if(dt<0){
		printf("Phuong trinh vo nghiem");
	}else{
		x1 = (-b + sqrt(dt))/(2*a);
		x2 = (-b - sqrt(dt))/(2*a);
		printf("Phuong trinh co nghiem x1= %f\n", x1);
		printf("Phuong trinh co nghiem x2= %f\n", x2);
	}
	return 0;
}
