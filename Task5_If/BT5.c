#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("Nhap vao so diem cua sinh vien: ");
	scanf("%d", &a);
	
	if(a>=75){
		printf("Sinh vien xep loai A");
	}
	if(a>=60 && a<75){
		printf("Sinh vien xep loai B");
	}
	if(a>=45 && a<60){
		printf("Sinh vien xep loai C");
	}
	if(a>=35 && a<45){
		printf("Sinh vien xep loai D");
	}
	if(a<35){
		printf("Sinh vien xep loai E");
	}
	
	return 0;
}
