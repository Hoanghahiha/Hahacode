#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[20];
	int vowel=0,consonant=0;
	int i;
	printf("Nhap vao mot tu: ");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		vowel++;
		else
		consonant++;
	}
	printf("So nguyen am: %d\n",vowel);
	printf("So phu am: %d\n",consonant);
	return 0;
}
