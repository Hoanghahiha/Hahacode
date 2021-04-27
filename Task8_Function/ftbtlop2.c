#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(int a){
	printf("WELLCOME TO HATABANK\n");
	printf("=====================================\n");
	printf("1. RUT TIEN\n");
	printf("2. CHUYEN TIEN\n");
	printf("3. KIEM TRA SO DU TK\n");
	printf("=====================================\n");
	
}
int menulogin(int mathe, int mapin){
	int a;
	char tiep = 'Y';
	while(tiep=='Y'){
	printf("WELLCOME TO HATABANK\n");
	printf("=====================================\n");
	printf("Moi ban nhap ma the: ");
	scanf("%d", &mathe);
	printf("Moi ban nhap ma PIN: ");
	scanf("%d", &mapin);
	if(mathe==393&&mapin==181193){
		system("cls");
		menu(a);
		return 0;
	}else{
		printf("\nBan nhap sai ma the hoac ma pin, Ban co muon thuc hien lai khong(Y-Yes): ");
		fflush(stdin);
		scanf("%c", &tiep);
		system("cls");
	}
	}
}
//int checksd(){
//	printf("So du trong tai khoan cua ban con: %d",mywallet()-tienrut());
//	
//}
//}
int tienrut(){
	int truevl=0,w,a;
	char t ='Y';
	int mywalet=10000000;
	while(t=='Y'){
	do{
		truevl=0;
			
		printf("Moi ban nhap so tien can rut: \n");
		printf("==============================\n");
		printf("1. 100.000 VND\n");
		printf("2. 200.000 VND\n");
		printf("3. 500.000 VND\n");
		printf("4. 1.000.000 VND\n");
		printf("5. 2.000.000 VND\n");
		printf("6. 5.000.000 VND\n");
		printf("7. So tien khac\n");
		printf("==============================\n");
		printf("Chon: ");
		scanf("%d", &a);
		switch(a){
			case 1:
				w=100000;
				break;
			case 2:
				w=200000;
				break;
			case 3:
				w=500000;
				break;
			case 4:
				w=1000000;
				break;
			case 5:
				w=2000000;
				break;
			case 6:
				w=5000000;
				break;
			case 7:
				do{
					printf("Nhap so tien ban muon rut: ");
					scanf("%d", &w);
					if(w%50000 != 0){
						printf("So tien ban nhap khong hop le, vui long nhap lai: \n");
						printf("Nhap so tien ban muon rut: ");
						scanf("%d", &w);
					}
				}while(w%50000!=0);
				break;
			default:
				truevl =1;
				break;
		}
	}while(truevl==1);
		if(w>mywalet){
			printf("So du trong tai khoan ban khong du, vui long thu lai: \n");
			} else if(w<=mywalet){
				printf("Rut tien thanh cong %d, so du con lai: %d\n", w,mywalet-w);
				mywalet=mywalet-w;
				printf("Ban co muon giao dich tiep khong: ");
				fflush(stdin);
				scanf("%c", &t);

			}
		}
	}
int chuyentien(){
	
}
int main(int argc, char *argv[]) {
	int mywal=1000;
	int pin,numcard;
	int a;
	if(menulogin(numcard,pin)==0){
		printf("Chon: ");
		scanf("%d",&a);
		switch(a){
			case 1:
				tienrut();
				break; 
		}
	}
	return 0;
}
