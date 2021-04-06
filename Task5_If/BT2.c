#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	
	if(a*b==1000){
		printf("Tich cua hai so tren bang 1000");
	}
		if(a*b>1000){
		printf("Tich cua hai so lon hon 1000");
	}
	if(a*b<1000){
		printf("Tich cua hai so tren nho hon 1000");
	}
	return 0;
}
