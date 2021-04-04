#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[30];
	int basic=2500, daper=55;
	float bonper=33.33, loandet=250.00;
	float salary;
	salary = basic + basic*daper/100 + bonper*basic/100 - loandet;
	scanf("%s", name);
	printf("Luong cua nhan vien %s la: \n", name);
	printf("%s %d$ %.2f$", name, basic, salary);
	return 0;
}
