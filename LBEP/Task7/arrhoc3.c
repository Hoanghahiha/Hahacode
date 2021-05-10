#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sv,i,i80=0,i70=0,i40=0,i0=0;
	int mark[100];
	int mark80[100],mark40[100],mark0[100],mark70[100];
	
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &sv);

	for(i=0;i<sv;i++){
		printf("Nhap so diem sinh vien thu %d: ", i+1);
		scanf("%d", &mark[i]);
	}
	for(i=0;i<sv;i++){
		if(mark[i]>=40){
			mark40[i40]=mark[i];
			i40++;
			printf("Hoc sinh [%d] so diem la %d: Qua mon\n", i+1,mark[i]);
		}
		if(mark[i]<40){
			mark0[i0]=mark[i];
			i0++;
			printf("Hoc sinh [%d]: Truot\n", i+1);
		}
		if(mark[i]>=80){
			mark80[i80]=mark[i];
			i80++;
			printf("Chuc mung hoc sinh [%d] nhan duoc hoc bong 100%%\n", i+1);
		}
		if(mark[i]>70 && mark[i]<=79){
			mark70[i70]=mark[i];
			i70++;
			printf("Hoc sinh [%d] nhan hoc bong 80%%\n", i+1);
		}
	}
	printf("\nSo sinh vien dat hoc bong 100%% la: %d\n",i80);
	printf("So sinh vien qua mon la: %d\n",i40);
	printf("So sinh vien rot mon la: %d\n",i0);
	printf("So sinh vien dat hoc bong 80%% la: %d\n", i70);
	

	return 0;
}
