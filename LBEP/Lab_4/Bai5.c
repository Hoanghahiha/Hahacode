#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int so;
	printf("          MENU          \n");
	printf("========================\n");
	printf("1. CF\n");
	printf("2. C\n");
	printf("3. HDJ\n");
	printf("4. DreamWeaver\n");
	printf("5. RDBMS\n");
	printf("6. Learn Java By Example\n");
	printf("=======================\n");
	printf("Chon: ");
	scanf("%d", &so);
	if(so==1)
	printf("Ban chon CF!");
	else if(so==2)
	printf("Ban chon C!");
	else if(so==3)
	printf("Ban chon HDJ!");
	else if(so==4)
	printf("Ban chon DreamWeaver!");
	else if(so==5)
	printf("Ban chon RDBMS!");
	else if(so==6)
	printf("Ban chon Learn Java By Example!");
	else
	printf("Ban chon sai(Chon so tu 1-->6)\nMoi ban nhap lai!");
	return 0;
}
