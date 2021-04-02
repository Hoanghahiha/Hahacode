#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int r;
	printf("Nhap vao mot so:");
	scanf("%d", &a);
	r = a%2;
	printf("So du r=%d", r);
	if(r==0){
		printf("%d la so chan", a);
		
	 }else{
	 	printf("%d la so le", a);
	 }

	return 0;
}
