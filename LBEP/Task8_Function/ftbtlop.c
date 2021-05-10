#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a,int b){
	return a+b;
}
float divi(int a, int b){
	return (float)a/b;
}
int multi(int a, int b){
	return a*b;
}
int sub(int a, int b){
	return a-b;
}
void menu(){
	printf("TINH TOAN\n");
	printf("=========================\n");
	printf("1. Tinh Tong\n");
	printf("2. Tinh Hieu\n");
	printf("3. Tinh Tich\n");
	printf("4. Tinh Thuong\n");
	printf("==========================\n");
}
int main(int argc, char *argv[]) {
	int a,b,c;
	char tiep = 'Y';
	while(tiep=='Y'){
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &b);
	menu();
	printf("Chon: ");
	scanf("%d", &c);
	switch(c){
		case 1:
			printf("Tong bang: %d", sum(a,b));
			break;
		case 2:
			printf("Hieu bang: %d", sub(a,b));
			break;
		case 3:
			printf("Tich bang: %d", multi(a,b));
			break;
		case 4:
			printf("Thuong bang: %.1f", divi(a,b));
			break;
	}
	printf("\nBan co muon tinh tiep khong(Y-Yes): ");
	fflush(stdin);
	scanf("%c", &tiep);
	system("cls");
}
	return 0;
}
