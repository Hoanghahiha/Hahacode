#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	static int ary[9]={1,2,3,4,5,6,7,8,9};
	int ary_new[9];
	int i;
	int total=0;
	for(i=0;i<9;i++){
		printf("\ni= %d\tary[i]= %d, &ary[i]= %d",i,ary[i],&ary[i]);
		printf("*(ary+i)=%d, ary + i= %d",*(ary+i),ary+i);
//		printf("\nNhap phan tu thu %d\t",i+1);
//		scanf("%d", ary_new+i);
//		total += *(ary_new+i);
	}
	printf("\nTotal = %d",total);
	return 0;
}
