#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[3],i,count=0,count1=0;
	int min=0,max=0,tb,tong=0;
	
	for(i=0;i<3;i++){
		printf("Nhap vao diem mon thu %d: ",i+1);
		scanf("%d", &A[i]);
		tong=tong+A[i];
	}
	printf("Tong diem cac mon la: %d\n", tong);
	max=A[0];
	min=A[0];
	for(i=1;i<3;i++){
		if(A[i]>max){
		max=A[i];
		count++;
		}
	}
	for(i=1;i<3;i++){
		if(A[i]<min){
		min=A[i];
		count++;
	}
	}
	printf("Diem cao nhat la: %d\n", max);
	printf("So lan xuat hien max: %d\n", count);
	printf("Diem thap nhat la: %d\n", min);
	printf("So lan xuat hien min: %d\n",count);
	printf("Diem rung binh la: %d\n",tong/i);
	
	return 0;
}
