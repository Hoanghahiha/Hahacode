#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char  i;
	int a,b;
	do{
	printf("\nNhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("\nNhap vao so thu hai: ");
	scanf("%d", &b);
	printf("\nMoi ban nhap cac phep tinh sau(+,-,x,:)");
	fflush(stdin);
	scanf("%c", &i);
	
	switch(i){
		case '+':
			printf("Tong bang: %d\n", a+b);
			break;
		case '-':
			printf("Hieu bang: %d\n", a-b);
			break;
	}
	printf("Ban co muon thuc hien tiep khong(Y/N): ");
	fflush(stdin);
	scanf("%c", &i);
}while(i!='N');
printf("chuong trinh ket thuc");
	return 0;
}
