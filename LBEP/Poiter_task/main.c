#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,arr[5],arr2[5];
	for(i=0;i<5;i++){
		printf("Nhap gia tri phan tu thu %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0,j=4;i<5;i++,j--){
		arr2[j]=arr[i];
	}
	for(i=0,j=4;i<5;i++,j--){
		printf("%d\t", arr2[i]);
	}
	return 0;
}
