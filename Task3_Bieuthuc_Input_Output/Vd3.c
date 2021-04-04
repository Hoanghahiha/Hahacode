#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=80;
	char b='P';
	printf("\nThis is the number store in 'a' %d",a);
	printf("\nThis is a character interpreted from 'a' %c",a);
	printf("\nThis is character stored in 'b' %c", b);
	printf("\nHey! The character of 'b' is printed as a number! %d", b);
	return 0;
}
