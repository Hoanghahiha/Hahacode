#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int getarea(int a,int b,int c){
	int S;
	S=(sqrt((a*a+b*b+c*c)*(a*a+b*b+c*c)-2*(a*a*a*a+b*b*b*b+c*c*c*c)))/4;
	return S;
}
int main(int argc, char *argv[]) {
	int i,j,k;
	printf("Nhap vao do dai canh thu nhat: ");
	scanf("%d", &i);
	printf("Nhap do dai canh thu hai: ");
	scanf("%d", &j);
	printf("Nhap vao do dai canh thu ba: ");
	scanf("%d", &k);
	if(i+j>k&&j+k>i&&k+i>j){
		printf("Dien tich tam giac bang: %d", getarea(i,j,k));
	}else{
		printf("Invalid");
	}
	
	
	return 0;
}
