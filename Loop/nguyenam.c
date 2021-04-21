#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i;
	printf("Nhap vao mot ky tu: ");
	scanf("%c", &i);

	switch(i){
	
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("Ky tu la nguyen am");
		break;
}
	return 0;
}
