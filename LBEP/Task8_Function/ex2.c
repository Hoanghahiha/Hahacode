#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int swap(int *a, int *b);
int main(int argc, char *argv[]) {
	int x=19,y=5;
	printf("Before swapping: x=%d, y=%d\n",x,y);
	swap(&x,&y);
	printf("After swapping: x=%d, y=%d\n",x,y);
	getch();
	return 0;
}
int swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("IN SWAP: Swapping: a=%d, b=%d", a,b);
	printf("\nSWAP OK\n");
}
