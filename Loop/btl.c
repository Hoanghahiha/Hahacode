#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int var=500, *ptr_var;
	ptr_var = &var;
	printf("The value %d is stored at address: %u\n", var, &var);
	printf("The value %u is stored at address: %u\n", ptr_var, &ptr_var);
	printf("The value %d is stored at address: %u\n", *ptr_var, ptr_var);
}
