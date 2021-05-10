#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sv,sv0=0;
	int mark[10],mark0[10];
	
	printf("Nhap so sinh vien trong lop: ");
	scanf("%d", &sv);
	
	for(i=0;i<sv;i++){
		printf("Nhap diem cho hoc sinh thu %d: ",i+1);
		scanf("%d",&mark[i]);
	}
	for(i=0;i<sv;i++){
		if(mark[i]<40){
			mark0[sv0]=mark[i];
			sv0++;
			printf("Hoc sinh thu %d co so diem %d truot\n",i+1,mark[i]);
		}
	}
	return 0;
}
