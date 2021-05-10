#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Nhap vao mot ki tu:\n");
	scanf("%c", &x);
	printf("Gia tri ki tu khi chuyen sang ma ASCII %d", x);
	return 0;
}
