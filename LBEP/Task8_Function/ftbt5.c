#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("TINH TOAN\n");
	printf("==================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh Tong\n");
	printf("3. Tinh Hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh thuong\n");
	printf("6. Exit\n");
	printf("==================\n");
	printf("Chon: ");
}
int sum(int a, int b){
	int total;
	total=a+b;
	printf("Tong bang: %d", total);
	return total;
}
int sub(int a, int b){
	printf("Hieu bang: %d",a-b);
	return(a-b);
}
int multi(int a, int b){
	printf("Tich bang: %d", a*b);
	return a*b;
}
double divi(int a, int b){
	printf("Thuong bang: %d",a/b);
	return a/b;
}
int nhap(int a, int b)
{
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &b);
}
int main(int argc, char *argv[]) {
	int a,b,c;
	char tiep='Y';
	while (tiep=='Y'){
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &b);
	menu();
	scanf("%d", &c);
	switch(c){
		case 1:
			nhap(a,b);
			break;
		case 2:
			sum(a,b);
			break;
		case 3:
			sub(a,b);
			break;
		case 4:
			multi(a,b);
			break;
		case 5:
			divi(a,b);
			break;
		case 6:
			break;
	}
	printf("\nBan co muon thuc hien tiep khong(Y-Yes, N-No): ");
	fflush(stdin);
	scanf("%c", &tiep);
	system("cls");
}
	return 0;
}
