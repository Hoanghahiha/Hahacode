#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum;
	float discount_rate;
	
	printf("Nhap vao mot so nguyen va mot so thuc:\n");
	scanf("%d %f", &sum, &discount_rate);
	printf("So nguyen: %d, so thuc: %f", sum, discount_rate);
	
}
