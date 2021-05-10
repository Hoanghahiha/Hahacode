#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count=0;
	while(count<=10){
		printf("\nInteration number %d\n", count);
		count+=2;
	}
	printf("\n The loop is completed. \n");
	return 0;
}
