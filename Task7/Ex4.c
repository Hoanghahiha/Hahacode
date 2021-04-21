#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char arr[5];
	int i;
	printf("\nEnter string: ");
	scanf("%s", &arr);
	printf("\nThe string is %s \n\n", arr);
	for(i=0;i<5;i++)
		printf("\t%d", arr[i]);
	
	return 0;
}
