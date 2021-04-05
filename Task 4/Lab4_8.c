#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=15;
	float f=3.456000;
	double d=3.4567891235;
	char c='E';
	printf("Kieu int: %d Byte\n", sizeof(int),i);
	printf("So nguyen: %d\n", i);
	
	printf("\nKieu float: %d\n", sizeof(float));
	printf("So thuc kieu float: %f\n", f);
	
	printf("\nKieu double : %d\n", sizeof(double));
	printf("So thuc kieu double: %f\n", d);
	
	printf("\nKieu char: %d\n", sizeof(char));
	printf("Ky tu: %c\n", c);
	
	printf("\nKieu long int: %d\n", sizeof(long int));
	printf("\nkieu long double: %d\n", sizeof(long double));
	return 0;
}
