#include <stdio.h>
#include <stdlib.h>
int check(int i){
	int x;
	if(i%50==0){
		x=0;
	}else{
		x=1;
	}
}
int main(){
	int arr[5];
	int a,b;
	printf("Nhap so phan tu: ");
	scanf("%d", &a);
	for(b=0;b<a;b++){
		printf("Phan tu thu %d : ", b+1);
		scanf("%d", &arr[b]);
	}
	for(b=0;b<a;b++){
		if(check(arr[b])==0){
			printf("%d\n",arr[b]);
		}else{
			printf("Khong la boi so: %d\n",arr[b]);
		}
	}
}
