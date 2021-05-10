#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int checknt(int a){
	int b;

	for(b=2;b<=sqrt(a);b++){
		if(a%b==0){
			return 0;
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
	int a[10];
	int i,n;
	printf("CHUONG TRINH KIEM TRA XEM MOT SO CO PHAI SO NGUYEN TO KHONG\n");
	printf("So phan tu trong mang: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Gia tri phan tu thu %d: ",i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
	if(checknt(a[i])==1){
		printf("Phan tu thu %d la so nguyen to\n",i+1);
	}else{
		printf("Phan tu thu %d khong la so nguyen to\n", i+1);
	}
}
	return 0;
}
