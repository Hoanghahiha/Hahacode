#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,str[81], *ptr;
	printf("\nEnter a sentence: ");
	gets(str);
	printf("\nEnter character to search for: ");
	a=getche();
	ptr=strchr(str,a);
	printf("\nString start at address: %u", str);
	printf("\nFirst occurrence os character is at address: %u", ptr);
	printf("\nPosiion of first occurence(stating from 0) is: %d", ptr-str);
	return 0;
}
