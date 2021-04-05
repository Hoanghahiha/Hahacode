#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int toan, ly, hoa, tong;
	float trungbinh;
	
	printf("Nhap diem mon toan: ");
	scanf("%d", &toan);
	
	printf("Nhap diem mon ly: ");
	scanf("%d", &ly);
	printf("Nhap diem mon hoa: ");
	scanf("%d", &hoa);
	
	tong = toan + ly + hoa;
	trungbinh = (float)tong/3;
	
	printf("Tong diem ba mon la: %d", tong);
	printf("Trung binh ba mon la: %f", trungbinh);
	
	
	return 0;
}
