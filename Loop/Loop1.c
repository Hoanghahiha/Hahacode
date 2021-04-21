#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int du,sum,le;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &i);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &j);
	du=i%2;
	
	if(du==1){
		for(le=i;le<=j;le+=2){
			sum+=le;
			printf("%d\t", le);
		}
	}else{
		for(le=i+1;le<=j;le+=2){
			sum+=le;
			printf("%d\t", le);
		}
	}
	printf("\nTong cac so le giua hai so: %d", sum);
	return 0;
}
