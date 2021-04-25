#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10]={12,8,23,8,25,8,90,21,11,90};
	int min=arr[0],max=arr[0],countmax=0,countmin=0;
	int i,total=0;
	for(i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
		total+=arr[i];
	}
	for(i=0;i<10;i++){
		if(arr[i]==max) countmax++;
	}
	for(i=0;i<10;i++){
		if(min==arr[i]) countmin++;
	}
	printf("Max la %d\n", max);
	printf("Min la %d\n", min);
	printf("So lan max xuat hien: %d\n", countmax);
	printf("So lan min xuat hien: %d\n", countmin);
	printf("Tong bang: %d\n", total);
	printf("Trung binh bang: %.1f", (float)total/10);
	return 0;
}
