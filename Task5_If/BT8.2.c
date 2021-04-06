#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &y);
	
	if(x<2000 || x>3000)
	printf("Gia tri duoc hien thi la so thu nhat");
 if(y>100 && y<500)
	printf("Gia tri duoc hien thi la so thu hai");
	return 0;
}
