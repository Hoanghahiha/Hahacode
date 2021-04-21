#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int math,english, tb;
	
	printf("Nhap vao diem Math: ");
	scanf("%d", &math);
	printf("Nhap vao diem English: ");
	scanf("%d", &english);
	
	tb=(math+english)/2;
	
	if(tb>=80&&tb<=90)
	printf("Thi sinh nhan duoc 500$ hoc bong");
	else if(tb>90)
	printf("Thi sinh nhan duoc 1000$ hoc bong");
	else if(tb>=40)
	printf("Thi sinh qua mon");
	else
	printf("Hoc sinh chua qua");

	return 0;
}
