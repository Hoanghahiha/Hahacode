#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alpha[26];
	int i,j;
	for(i=82,j=0;j<20; i++,j++){
		alpha[j]=i;
		printf("The character now assigned is %c \n", alpha[j]);
	}
	return 0;
}
