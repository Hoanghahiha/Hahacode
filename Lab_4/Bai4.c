#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i;
	
	printf("Nhap vao mot ky tu: ");
	scanf("%c", &i);
	
	if((i<'a' || i>'z') && (i<'A' || i>'Z'))
	printf("Ky tu tren khong thuoc bang Alphabet");
	else
	switch(i){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Ky tu la nguyen am");
			break;
		default:
			printf("Ky tu la phu am");
			break;
	}
	
	return 0;
}
