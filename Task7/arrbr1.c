#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int arr[10];
	
	for(i=0;i<10;i++){
		printf("Nhap phan tu [%d] thu %d: ",i, i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<10;i+=2){
		printf("Phan tu %d thu %d: %d\n",i, i+1,arr[i]);
	}
	return 0;
}
