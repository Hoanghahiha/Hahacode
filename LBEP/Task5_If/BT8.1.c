#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int toan, ly, hoa;
	int trungbinh;
	
	printf("Nhap vao diem mon Toan: ");
	scanf("%d", &toan);
	
	printf("Nhap diem mon Ly: ");
	scanf("%d", &ly);
	
	printf("Nhap diem mon hoa: ");
	scanf("%d", &hoa);
	
	trungbinh= (toan+ly+hoa)/3;
	
	if(trungbinh>=90)
	printf("Hoc vien xep loai E+");
	if(trungbinh>=80 && trungbinh<90)
	printf("Hoc vien xep loai E");
	if(trungbinh>=70 && trungbinh<80)
	printf("Hoc vien xep loai A+");
	if(trungbinh>=60 && trungbinh<70)
	printf("Hoc vien xep loai A");
	if(trungbinh>=50 && trungbinh<60)
	printf("Hoc vien xep loai B+");
	if(trungbinh<50)
	printf("Hoc vien rot");
	return 0;
}
