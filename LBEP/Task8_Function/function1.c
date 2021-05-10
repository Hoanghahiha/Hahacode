#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
int divi(int a, int b){
	int c;
	c=a/b;
	return c;
}
int tich(int a, int b){
	int c;
	c=a*b;
	return c;
}
int hieu(int a, int b){
	return a-b;
}
void hello(){
	printf("Hello world");
}
void greeting(char name[150], int tuoi, char gioitinh[10]){
	printf("Hello %s %s %d tuoi",gioitinh, name,tuoi);
}
int main(int argc, char *argv[]) {
	char myname[150];
	int i; int age;
	char gt[10];
	printf("Nhap ten: ");
	gets(myname);
	printf("Nhap tuoi:");
	scanf("%d", &age);
	printf("Gioi tinh: ");
	fflush(stdin);
	scanf("%c", &gt);
	switch(gt){
		case 'M':
			printf("anh");
			break;
		case 'M':
			printf("em");
			break;
	}
	greeting(myname,age,gt);
return 0;
//	int a,b;
//	char c;
//	char tiep = 'Y';
//	printf("Nhap vao gia tri cua a: ");
//	scanf("%d", &a);
//	printf("Nhap gia tri cua b: ");
//	scanf("%d", &b);
//	while(tiep=='Y'){
//	printf("Ban muon chon phep tinh gi(+,-,x,:): ");
//	fflush(stdin);
//	scanf("%c", &c);
//	switch(c){
//		case '+':
//			printf("Tong la: %d", add(a,b));
//			break;
//		case':':
//			printf("Thuong la: %d", divi(a,b));
//			break;
//		case'x':
//			printf("Tich la: %d", tich(a,b));
//			break;
//		case'-':
//			printf("Hieu la: %d", hieu(a,b));
//			break;
//		default:
//			printf("Ban nhap sai");
//			break;
//	}
//	printf("\nBan co muon nhap tiep khong(Y to continue and anycase to escape): \n");
//	fflush(stdin);
//	scanf("%c", &tiep);
//}
//	sum=add(a,b);
//	printf("Tong la %d\n", add(a,b));
//	printf("Thuong la %d\n", divi(a,b));
//	printf("Tich la %d\n", tich(a,b));
//	printf("Hieu la %d\n", hieu(a,b));
	return 0;
}
