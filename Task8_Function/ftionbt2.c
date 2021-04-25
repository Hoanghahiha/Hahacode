#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bp(int a){
	return(a*a);
}
int main(int argc, char *argv[]) {
	int i;
	printf("Nhap vao mot so: ");
	scanf("%d", &i);
	printf("Binh phuong so do la: %d",bp(i));
	return 0;
}
