#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int A[3][4];
//	int i,j;
//	
//	for(i=0;i<3;i++){
//		for(j=0;j<4;j++){
//			printf("Nhap phan tu [%d][%d] co gia tri: \n",i,j);
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for(i=0;i<3;i++){
//		printf("\n");
//		for(j=0;j<4;j++){
//			printf("%d\t",A[i][j] );
//		}
//	}
//	getch();
	int i,j,arr[5],arr2[5];
	for(i=0;i<5;i++){
		printf("Nhap gia tri phan tu thu %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0,j=4;i<5;i++,j--){
		arr2[j]=arr[i];
		printf("%d\t", arr2[i]);
	}
	return 0;
}
