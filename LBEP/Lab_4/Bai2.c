#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kytu;
	
	printf("Nhap vao mot ky tu Alphabet(A-Z,a-z): ");
	scanf("%c", &kytu);
	
	if(kytu>='A' && kytu<='Z'){
		printf("Ky tu la chu hoa");
	}else{
		printf("Ky tu la chu thuong");
	}
	return 0;
}
