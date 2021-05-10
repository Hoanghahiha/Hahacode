#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m;
	char i;
	printf("===Chuong trinh chuyen doi do dai===\n");
	printf("Do dai nhap vao(m): ");
	scanf("%d", &m);
	printf("Don vi doi(1-mm, 2-cm, 3-dm, 4-km): ");
	fflush(stdin);
	scanf("%c", &i);
	
	if(i=='1')
	printf("Do dai theo mm la: %d", 1000*m);
	else if(i=='2')
	printf("Do dai theo cm la: %d", 100*m);
	else if(i=='3')
	printf("Do dai theo dm la: %d", 10*m);
	else if(i=='4')
	printf("Do dai theo km la: %f", (float)m/1000);
	return 0;
}
