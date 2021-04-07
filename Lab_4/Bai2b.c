#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kytu;
	
	printf("Nhap vao mot ky tu Alphabet(A-Z,a-z): ");
	scanf("%c", &kytu);
	
	if(kytu>='A' && kytu<='Z')
	printf("Ky tu la chu hoa");
	else if(kytu>='a' && kytu<='z')
	printf("Ky tu la chu thuong");
	else if(kytu>='0' && kytu<='9')
	printf("Ky tu la chu so");
	else 
	printf("Ky tu dac biet");
	return 0;
}
