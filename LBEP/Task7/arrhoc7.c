#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,a[10],a7[10],a8[10],a4[10],a0[10],b8=0,b7=0,b4=0,b0=0;
	int c0[10],c4[10],c7[10],c8[10];
	for(i=0;i<10;i++){
		printf("Nhap diem sinh vien thu %d: ", i+1);
		scanf("%d", &a[i]);
		if(a[i]>=4){
			if(a[i]>=7){
				if(a[i]<8){
					a7[b7]=a[i];
					c7[b7++]=i+1;
				}else{
					a8[b8]=a[i];
					c8[b8++]=i+1;
				}
			}else{
				a4[b4]=a[i];
				c4[b4++]=i+1;
			}
		}else{
			a0[b0]=a[i];
			c0[b0++]=i+1;
		}
	}
	printf("So sinh vien rot mon: %d",b0);
	for(i=0;i<b0;i++){
		printf("\nSinh vien thu %d dat diem: %d", c0[i],a0[i]);
	}
	printf("\nSo sinh vien qua mon: %d",b4);
	for(i=0;i<b4;i++){
		printf("\nSinh vien thu %d qua mon: %d",c4[i],a4[i]);
	}
	printf("\nSo sinh vien dat hoc bong 50%% la: %d",b7);
	for(i=0;i<b7;i++){
		printf("\nSinh vien thu %d da diem: %d",c7[i],a7[i]);
	}
	printf("\nSo sinh vien dat hoc bong 100%% la: %d",b8);
	for(i=0;i<b8;i++){
		printf("\nSinh vien thu %d dat diem: %d",c8[i],a8[i]);
	}
	return 0;
}
