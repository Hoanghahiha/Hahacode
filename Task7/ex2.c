#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int i, total, high;
	for(i=0;i<10;i++){
		printf("\nEnter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	high=arr[0];
	for(i=0;i<10;i++){
		if(arr[i]>high)
		high=arr[i];
	}
	printf("\nGia tri lon nhat la: %d", high);
	for(i=0; i<10;i++)
	total = total + arr[i];
	printf("\nTrung binh cua day tren la: %d", total/i);
	return 0;
}
