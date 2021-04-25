#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[5][18];
	int i,j;	
	for(i=0;i<5;i++){
		printf("Nhap ho va ten day du nguoi thu %d: ",i+1);
		gets(name[i]);
	}
	for(i=0;i<5;i++){
		printf("Ten la: %s\n", name[i]);
	}
	return 0;
}
