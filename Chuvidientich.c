#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int S;
	int C;
	int R;
	
	printf("Nhap vao do dai ban kinh hinh tron: ");
	scanf("%d", &R);
	
	C = 2*R*3.14;
	S = R*R*3.14;
	
	printf("Dien tich hinh tron tren la: %d\n", S);
	printf("Chu vi hinh ron tren la: %d", C);
	
	return 0;
}
