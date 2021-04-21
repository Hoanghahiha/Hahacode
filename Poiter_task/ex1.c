#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int var=500;
	int *ptr_var;
	ptr_var=&var;
	printf("Gia tri var=%d duoc luu tru tai dia chi &var=: %u",var,&var);
	printf("\nGia tri ptr_var = %u duoc luu tru tai dia chi &ptr_var=%u",ptr_var,&ptr_var);
	printf("\nGia tri *ptr_var = %d duoc luu tru tai dia chi ptr_var:%u",*ptr_var,ptr_var);
	printf("\nToan tu ++ cua ptr_var++ %u", ++ptr_var);
	return 0;
}
