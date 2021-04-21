#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[10][10];
	int i=0;
	int vowel=0;
	
	printf("Nhap vao mot chuoi: ");
	scanf("%s", s[i]);
	
	while(s[i++] !='0'){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			vowel++;
		}
	}
	printf("Chuoi co chua: %d nguyen am", vowel);
	return 0;
}
