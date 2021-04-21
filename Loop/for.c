#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ten[250];
	int tuoi,t;
	char gioitinh;
	printf("Nhap vao ten: ");
	gets (ten);
	printf("Nhap vao so tuoi: ");
	scanf("%d", &tuoi);
	printf("Nhap gioi tinh: ");
	fflush(stdin);
	scanf("%c", &gioitinh);
	for(t=1;t<tuoi;t+=1){
		if(tuoi>=1 && tuoi<=19){
		fflush(stdin);
		printf("Chao em %s\n", ten);
		}else if(tuoi>19 && tuoi<=25){
		printf("Chao ban\n");
		}else if(tuoi>25 && tuoi<=40 && gioitinh=='M'){
		printf("Chao anh\n");
		}else if(tuoi>25 && tuoi<=40 && gioitinh=='F'){
		printf("Chao chi\n");
	}else{
		printf("Chao bac");
	}
	}
	
	return 0;
}
