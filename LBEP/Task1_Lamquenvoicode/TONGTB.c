#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Ly;
	int Hoa;
	int Sinh;
	int Tong;
	float Trung_binh;
	printf("Nhap diem mon Ly\n");
	scanf("%d", &Ly);
	
	printf("Nhap diem mon Hoa\n");
	scanf("%d", &Hoa);
	
	printf("Nhap diem mon Sinh\n");
	scanf("%d", &Sinh);
	
	Tong = Ly + Hoa + Sinh;
	printf("Tong diem ba mon la: %d\n", Tong);
	
	Trung_binh = Tong/3;
	printf("Diem trung binh ba mon la: %f", Trung_binh);
	
	
	return 0;
}
