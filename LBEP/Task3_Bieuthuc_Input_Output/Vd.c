#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=10;
	float b=24.67892345;
	char ch = 'A';
	printf("\nDu lieu so nguyen = %d",a);
	printf("\n Du lieu so thuc = %f",b);
	printf("\nThis print are string");
	printf("\n%s", "This also prints a string");
	printf("\nKy tu = %c", ch);
	printf("\n[%d]\n", 555);
	printf("[%-d]\n", 555);
	printf("[%20d]\n", 555);
	printf("[%020d]\n", 555);
	
	printf("So 555.55 theo mot so dang khac nhau\n");
	printf("[%f]\n",555.55);
	printf("[%e]\n", 555.55);
	printf("[%-f]\n", 555.55);
	printf("[%10.3f]\n", 555.55);
	printf("[%0f]\n", 555.55);
	printf("[%-010.3f]\n", 555.55);
	printf("[%010.3e]\n", 555.55);
	printf("[%-010.3e]\n", 555.55);
	
	
	return 0;
}
