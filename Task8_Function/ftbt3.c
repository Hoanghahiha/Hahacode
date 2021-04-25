#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(int arr[],int size){
	int i;
	for(i=size-1;i>=0;i--){
		printf("%d\t", arr[i]);
	}
//	return arr;
}
int main(int argc, char *argv[]) {
	int arr[5];
	int j,k;
	printf("Nhap so phan tu: ");
	scanf("%d", &j);
	for(k=0;k<j;k++){
		printf("Gia tri phan tu %d: ",k+1);
		scanf("%d", &arr[k]);
	}
	printf("Mang dao nguoc la: ");
	reverse(arr,j);
	return 0;
}
