#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char i;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("      MENU       \n");
	printf("=================\n");
	printf("+\n");
	printf("-\n");
	printf("x\n");
	printf(":\n");
	printf("=================\n");
	printf("Chon: ");
	fflush(stdin);
	scanf("%c", &i);
	
	if(i=='+')
	printf("Tong: %d+%d=%d", a,b,a+b);
	else if(i=='-')
	printf("Hieu: %d-%d=%d", a,b,a-b);
	else if(i=='x')
	printf("Tich: %d*%d=%d", a,b,a*b);
	else if(i==':')
	printf("Thuong: %d/%d=%f", a,b,(float)a/b);
	return 0;
}
