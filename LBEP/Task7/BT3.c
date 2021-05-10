#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	int i,loop;
	printf("Nhap vao cac phan tu cua mang bao gom: ");
	scanf("%d", &i);
	
	for(i=1;i<=5;i++){
		printf("Phan tu thu nhat la: ");
		scanf("%d",&arr[i]);
	}
	return 0;
}
