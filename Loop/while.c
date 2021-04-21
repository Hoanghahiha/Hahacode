#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pass, numcard;
	char tiep='Y';
	while(tiep=='Y'){
		printf("\nMoi ban nhap ma the: ");
		scanf("%d", &numcard);
		printf("Moi ban nhap so pin: ");
		scanf("%d", &pass);

		if(pass==123 && numcard==456)
		system("cls");
		printf("Chao mung ban den voi ngan hang Hatabank.\nMoi ban chon cac dich vu tiep theo");
		if(pass!=123 && numcard!=456)
		printf("Ban nhap sai ma the hoac mat khau\nBan co muon nhap lai khong(Y-Yes, N-No): \n");
		fflush(stdin);
		scanf("%c", &tiep);
	}
	return 0;
}
