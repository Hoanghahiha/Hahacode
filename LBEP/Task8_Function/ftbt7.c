#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("GU NY CUA TOI\n");
	printf("=======================================\n");
	printf("1. Dau tien la female nhe :))\n");
	printf("2. Chieu cao tren met ruoi la duoc roi\n");
	printf("3. Trong ua nhin la duoc\n");
	printf("4. Het\n");
	printf("=======================================\n");
}
int Check(int chieucao, char gioitinh, char bengoai){
	int x;
	if(chieucao>150 && gioitinh == 'F' && bengoai == 'Y'){
		x=0;
	}else{
		x=1;
	}
	return x;
}
int Say(char say){
	int x;
	if(say=='Y'){
		x=0;
	}else{
		x=1;
	}
	return x;
}
void Break(){
	printf("Minh that tinh roi!");
}
void Love(){
	printf("Minh se yeu ban den het kiep nay va sang ca cac kiep sau nua");
}
int main(int argc, char *argv[]) {
	char gt,bengoaiquantronglam,noi;
	int length;
	menu();
	printf("Vui long nhap gioi tinh cua ban: ");
	fflush(stdin);
	scanf("%c", &gt);
	printf("Vui long nhap chieu cao cua ban: ");
	scanf("%d", &length);
	printf("Ban thay minh co xinh khong(Y-Yes, N-No): ");
	fflush(stdin);
	scanf("%c", &bengoaiquantronglam);
	if(Check(length,gt,bengoaiquantronglam)==0){
		printf("Chung minh hen ho nhe(Y-Yes, N-No):");
		fflush(stdin);
		scanf("%c", &noi);
		if(Say(noi)==0){
			Love();
		}else{
			Break();
		}
	}else{
		printf("Chung ta co duyen nhung khong co phan hen kiep sau nhe");
	}
	return 0;
}
