#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char hv[5][30];
	int i,j;
	
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &j);
	for(i=0;i<j;i++){
		printf("Nhap ten hoc vien thu %d: ", i+1);
		scanf("%s", &hv[i]);
		fflush(stdin);
	}
	for(i=0;i<j;i++){
		printf("Hoc vien thu %d la: %s\n",i+1,hv[i]);
	}
	return 0;
}
