#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int arr[],int size){
	int tong=0,i;
	for(i=0;i<size;i++){
	tong+=arr[i];
}
	return tong;
}
int main(int argc, char *argv[]) {
	int arr2[5]={1,3,5,7,10};
	int r=sum(arr2,5);
	printf("sum is %d", r);
	return 0;
}
