#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	
	if(a%b==0)
	printf("So thu hai la uoc so cua so thu nhat");
	else if(b%a==0)
	printf("So thu nhat la uoc so cua so thu hai");
	else
	printf("Hai so khong la uoc so cua nhau");
	return 0;
}
