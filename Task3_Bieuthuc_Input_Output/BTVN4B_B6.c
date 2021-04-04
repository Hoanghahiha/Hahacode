#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ho[5], ten[5], dem[5];
	printf("Nhap vao ho cua ban: ");
	scanf("%s",&ho);
	printf("\nNhap vao dem cua ban: ");
	scanf("%s", &dem);
	printf("\nNhap vao ten cua ban: ");
	scanf("%s",&ten);
	printf("\nTen cua ban la: %s %s %s", ho, dem, ten);
	return 0;
}
