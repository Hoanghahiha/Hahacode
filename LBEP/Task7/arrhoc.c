#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	int i,n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		printf("Phan tu thu [%d] trong mang la: %d \n", i+1, arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("Phan tu [%d] trong mang la: %d\n",i+1,arr[i]);
	}
	return 0;
}
