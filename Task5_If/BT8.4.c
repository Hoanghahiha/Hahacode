#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	
	printf("Nhap vao so thu ba: ");
	scanf("%d", &c);
	
	if(a>b&&a>c)
	printf("So thu nhat la so lon nhat");
	if(b>a&&b>c)
	printf("So thu hai la so lon nhat");
	if(c>a&&c>b)
	printf("So thu ba la so lon nhat");
	return 0;
}
