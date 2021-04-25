#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr1[3][4],arr2[3][4];
	int arr[3][4];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Nhap phan tu bang 1 thu [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Nhap phan tu bang 2 thu [%d][%d]: ",i+1,j+1);
			scanf("%d", &arr2[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			arr[i][j]=arr1[i][j] + arr2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Phan tu tong [%d][%d]: %d\n",i+1,j+1,arr[i][j]);
		}
	}
	for(i=2;i>=0;i--){
		for(j=3;j>=0;j--){
			printf("Phan tu [%d][%d]: %d\n",i+1,j+1,arr[i][j]);
		}
	}
	
	
	return 0;
}
