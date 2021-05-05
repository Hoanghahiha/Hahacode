#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
	int i;
	printf("Lower case: ");
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i]+=32;
		}
	}
	printf("Upper Case: %s",str);
	return 0;
}
