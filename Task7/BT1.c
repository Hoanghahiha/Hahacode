#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n=0;
	int item;
	char x[10][12];
	char temp[12];
	
	printf("Nhap vao ten cac hoc sinh ben duoi\n");
	printf("Nhan 'N' de ket thuc viec nhap\n");
	
	do{
		printf("Hoc sinh thu %d: ", n+1);
		scanf("%s", x[n]);
	}while(strcmp(x[n++], "N"));
	
	n=n-1;
	for(item=0;item<n-1;++item){
		for(i=item+1;i<n;i++){
			if(strcmp(x[item],x[i])>0){
				strcpy(temp, x[item]);
				strcpy(x[item], x[i]);
				strcpy(x[i], temp);
			}
		}
	}
	printf("Ten sap xep lai thanh: \n");
	for(i=0;i<n;++i){
		printf("\nHoc sinh thu %d la %s", i+1, x[i]);
	}
	return 0;
}
