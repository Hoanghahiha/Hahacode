#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cm;
	float f,i;
	
	printf("Nhap vao do dai: ");
	scanf("%d", &cm);
	
	printf("Do dai cua gia tri tren khi chuyen sang inch la: %.1f\n", cm/2.54 );
	
	printf("Do dai cua gia tri tren khi chuyen doi sang foot la: %.1f", cm/30.48);
	return 0;
}
