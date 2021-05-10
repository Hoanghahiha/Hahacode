#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float dientich(float chieudai,float chieurong){
	return chieudai*chieurong;
}
float chuvi(float chieudai, float chieurong){
	return 2*(chieudai+chieurong);
}
void menu(){
	printf("1. Tinh dien tich:");
	printf("\n2. Tinh chu vi:");
}
int main(int argc, char *argv[]) {
	float a,b;
	int c;
	char tiep='Y';
	while(tiep=='Y'){
	printf("Nhap chieu dai HCN: ");
	scanf("%f", &a);
	printf("Nhap chieu rong HCN: ");
	scanf("%f", &b);
	menu();
	printf("\nChon: ");
	scanf("%d", &c);
	switch(c){
		case 1:
			printf("Dien tich HCN la: %.1f",dientich(a,b));
			break;
		case 2:
			printf("Chu vi HCN la: %.1f", chuvi(a,b));
			break;
	}
	printf("\nBan co muon tiep tuc khong(Y-Yes, N-No): ");
	fflush(stdin);
	scanf("%c",&tiep);
	system("cls");
}
	return 0;
}
