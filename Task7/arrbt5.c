#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[4][3];
	int row, col;
	int total=0;
	
	for(row=0;row<4;row++){
		for(col=0;col<3;col++){
			printf("Nhap diem mon thu [%d] cua sv thu [%d]: ",row+1,col+1);
			scanf("%d", &arr[row][col]);
		}
	}
	for(row=0;row<4;row++){
		for(col=0;col<3;col++){
			printf("Diem mon thu [%d] sv thu [%d]: %d\n",row+1,col+1,arr[row][col]);
		}
	}
	for(col=0;col<3;col++){
		total=0;
		for(row=0;row<4;row++){
			total+=arr[row][col];
		}
		printf("Diem tong hs thu %d: %d\n",col+1,total);
		printf("Diem trung binh hoc sinh thu %d: %.1f\n",col+1,(float)total/4);
	}
	return 0;
}
