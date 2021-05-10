#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i, A, B, C, D, F, P, V;
	char a, b, c, d, f, p, v;
	a=A;
	
	printf("Nhap vao mot chu cai: ");
	scanf("%s", &i);
	
	switch(i){
		case 'a':
			printf("\nNgon ngu la Ada");
			break;
		case 'A':
			printf("\nNgon ngu la Ada");
			break;
		case'b':
			printf("Basic");
			break;
		case 'B':
			printf("Basic");
			break;
		case'c':
			printf("COBOL");
			break;
		case'C':
			printf("COBOL");
			break;
		case 'd':
			printf("dBSE III");
			break;
		case'D':
			printf("dBASE III");
			break;
		case'f':
			printf("Fortran");
			break;
		case'F':
			printf("Fortran");
			break;
		case'p':
			printf("Pascal");
			break;
		case'P':
			printf("Pascal");
			break;
		case 'v':
			printf("Visual C++");
			break;
		case'V':
			printf("Visual C++");
			break;
		default:
			printf("\nInvalid program");
			break;
	}
	return 0;
}
