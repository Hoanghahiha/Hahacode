#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,h;
	
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	
	h=a-b;
	printf("Hieu cua hai so la: %d\n", h);
	
	if(h==a||h==b){
		printf("Hieu bang voi gia tri  so nhap vao");
	}else{
		printf("Hieu khong bang bat ky gia tri nao duoc nhap");
	}
	return 0;
}
