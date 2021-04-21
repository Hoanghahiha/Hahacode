#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,max;
	printf("Please enter the maximum value \n");
	printf("for which a table can be print: ");
	scanf("%d", &max);
	
	for(i=0, j=max; i<=max; i++, j--)
	printf("%d+%d=%d", i, j, i+j);
	return 0;
}
