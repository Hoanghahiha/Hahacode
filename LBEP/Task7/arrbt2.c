#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10]={1,2,3,4,5,0,0,0,0,0};
	float arr1[10];
	int i,j;
	for(i=0,j=0;i<10;i++,j++){
		arr1[j]= arr[i];
	}
	for(i=0,j=0;i<10&&j<10;i++,j++){
		printf("%.1f \t%d\n",arr1[j],arr[i]);
	}
	return 0;
}
