#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	
	if(a>b && b>c)
	printf("%d  %d  %d", a,b,c);
	else if(b>a && a>c)
	printf("%d  %d  %d", b,a,c);
	else if(c>a && a>b)
	printf("%d  %d  %d", c,a,b);
	else if(a>b && c>b && a>c)
	printf("%d  %d  %d", a,c,b);
	else if(b>a && b>c && c>a)
	printf("%d  %d  %d", b,c,a);
	else if(c>a && c>b && b>a)
	printf("%d  %d  %d", c,b,a);
	
	return 0;
}
