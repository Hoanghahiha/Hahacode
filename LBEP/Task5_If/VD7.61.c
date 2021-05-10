#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int result;
	
	printf("Nhap vao so diem cua ban: ");
	scanf("%d", &result);
	
	if(result>=45){
		printf("Congratulaions\n");
	}else{
		printf("Failed\n");
	}
	return 0;
}
