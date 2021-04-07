#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("Nhap vao do dai canh thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao do dai canh thu hai: ");
	scanf("%d", &b);
	printf("Nhap vao do dai canh thu ba: ");
	scanf("%d", &c);
	
	if(a*a==b*b+c*c)
	printf("Canh thu nhat la canh huyen");
	else if(b*b==a*a+c*c)
	printf("Canh thu hai la canh huyen");
	else if(c*c==a*a+b*b)
	printf("Canh thu ba la canh huyen");
	else
	printf("Ba so tren khong tao thanh canh tam giac vuong");
	
	
	return 0;
}
