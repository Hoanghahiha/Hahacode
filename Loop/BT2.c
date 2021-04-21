#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	int sum,le,du;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap so thu hai: ");
	scanf("%d", &num2);
	
	du=num1%2;
	
	if(du==1){
		for(le=num1;le<=num2;le+=2){
			sum+=le;
			printf("\nCac so le nam giua hai so la: %d", le);
		}
	}else{
		for(le=num1+1;le<=num2;le+=2){
			sum+=le;
			printf("\nCac so le nam giua hai so la %d", le);
		}
	}
	printf("\nTong cac so le giua hai so la: %d", sum);
	
	
	return 0;
}
