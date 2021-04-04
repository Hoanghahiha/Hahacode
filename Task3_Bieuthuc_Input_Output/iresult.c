#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, a=10, b=8, c=6, d=5, e=2;
	
	printf("i=a-b-c-d= %d\n", a-b-c-d);
	printf("i=a-b+c-d= %d\n", a-b+c-d);
	printf("i=a+b/c/d= %d\n", a+b/c/d);
	printf("i=a+b/c*d= %d\n", a+b/c*d);
	printf("i=a/b*c*d= %d\n", a/b*c*d);
	printf("i=a%%b/c*d= %d\n", a%b/c*d);
	printf("i=a%%b%%c%%d= %d\n", a%b%c%d);
	printf("i=a-(b-c)-d= %d\n", a-(b-c)-d);
	printf("i=(a-(b-c)-d)= %d\n", (a-(b-c)-d));
	printf("i=a-((b-c)-d)= %d\n", a-((b-c)-d));
	printf("i=a%%(b%%c)*d*e= %d\n", a%(b%c)*d*e);
	printf("i=a+(b-c)*d-e= %d\n", a+(b-c)*d-e);
	printf("i=(a+b)*c+d*e= %d\n", (a+b)*c+d*e);
	printf("i=(a+b)*(c/d)%%e= %d\n", (a+b)*(c/d)%e);
	return 0;
}
