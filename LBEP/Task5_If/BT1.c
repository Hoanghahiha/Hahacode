#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("Nhap vao so thu nhat:");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	
	if(a%b==0){
		printf("So thu nhat chia het cho so thu hai");
		}else{
			printf("So thu nhat khong chia het cho so thu hai");
		}
	return 0;
}
