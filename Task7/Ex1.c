#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[4];
	num[0]='A';
	num[1]=2;
	num[2]=5;
	num[3]=1;
	int i;
	for(i=0;i<=4;i++){
		printf("\nNumber at [%d] is %d", i ,num[i]);
	}
	return 0;
}
