#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[150];
	int i=0,vowel;
	printf("Enter your name: ");
	gets(name);
	for(i=0;i<14;i++){
		printf("%c*",name[i]);
	}
	for(i=0;i<strlen(name);i++){
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		vowel++;
	}
	printf("So nguyen am la %d", vowel);
	return 0;
}
