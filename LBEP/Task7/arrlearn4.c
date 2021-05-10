#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row, col;
	int arr[30][30];
	int tong[5];
	for(col=0;col<3;col++){
		for(row=0;row<2;row++){
			printf("Nhap so diem cho sv thu %d mon %d: ",col+1,row+1);
			scanf("%d", &arr[row][col]);
			tong[col]=tong[row]+arr[row][col];
		}
	}
	for(row=0;row<2;row++){
		printf("%d\t", tong);
	}
//	for(col=0;col<3;col++){
//		for(row=0;row<2;row++){
//			printf("%d\t", arr[row][col]);
//		}
//	}
//	printf("\n%d\t", tong);
//	printf("\n%d\t", col);
	return 0;
}
