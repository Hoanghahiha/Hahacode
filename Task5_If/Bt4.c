#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int salary;
	int type;
	
	printf("Nhap vao so luong cua nhan vien: ");
	scanf("%d", &salary);
	printf("Nhap vao loai nhan vien(1-3): ");
	scanf("%d", &type);
	
	if(type == 1){
		printf("Luong cuoi thang cua nhan vien nay la: %d", salary+300);
	}
	if(type ==2){
		printf("Luong cuoi thang cua nhan vien nay la: %d", salary+250);
	}
	if(type!=1 && type!=2){
		printf("Luong cuoi thang cua nhan vien nay la: %d", salary+100);
	}
	return 0;
}
