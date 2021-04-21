#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,k;
	
	printf("Moi ban nhap vao mot so: ");
	scanf("%d", &i);
	
	for(j=0;j<=9;j++){
		printf("Bang cuu chuong cua so %d la:\n", i);
		printf("%d*%d=%d\n",i,j,i*j);
	}
	return 0;
}
