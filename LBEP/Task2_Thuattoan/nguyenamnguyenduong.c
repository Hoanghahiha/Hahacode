#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("Nhap vao mot so: ");
	scanf("%d", &a);
	
	if(a>0){
		printf("%d la so nguyen duong\n", a);
	}
	 if(a==0){
	 printf("%d bang 0\n", a);	
	}
	
	if(a<0){
		printf("%d la so nguyen am",a);
	}

	return 0;
}
