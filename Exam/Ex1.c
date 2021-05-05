#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m;
	int tong=0;
	printf("Enter number: ");
	scanf("%d", &n);
	while(n>0){
		m=n%10;
		tong = tong +m;
		n=n/10;
	}
	printf("Total digit: %d", tong);
	return 0;
}
