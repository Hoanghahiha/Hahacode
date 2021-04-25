#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	int vowel=0,consonant=0;
	int i;
	printf("Nhap vao mot tu: ");
	gets(name);
	int length=strlen(name);
	for(i=0;i<strlen(name);i++){
		printf("%c*",name[i]);}
	for(i=0;i<strlen(name);i++){
		if(name[i]=='a'||name[i]=='e'||name[i]=='o'||name[i]=='i'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
		vowel++;
	printf("\nCac ki tu nguyen am la: %c\n",name[i]);
	}else{
		consonant++;
	}
	}
	printf("\nSo nguyen am: %d\n",vowel);
	printf("So phu am: %d\n",consonant);
	return 0;
}
