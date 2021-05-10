#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[10];
	int i;
	int total = 0;
	int min = 0;
	int max= 0;
	for(i=0;i<10;i++){
		printf("\n Enter value: %d: ", i+1);
		scanf("%d", &ary[i]);
		if(i==0){
			min=ary[0];
			max=ary[0];
		}
		if(max<ary[i]) max = ary[i];
		if(min >ary[i]) min = ary[i];
		total +=ary[i];
	}
	printf("\nmax = %d\n", max);
	printf("\nmin = %d\n", min);
	printf("\ntotal = %d\n", total);
	printf("\naverage = %d\n", total/10);
	
	return 0;
}
