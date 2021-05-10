#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, m=3, n=5, r,t;
	float x=3.0, y;
	r = n % m;
	y=n/m;
	printf("t=%d\n", n/m);
	printf("r=%d\n", r);
	printf("t=%d\n", x*y-m/2);
	
	printf("r= %d\n", (m+n)/r);
return 0;
}
