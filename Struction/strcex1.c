#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct thoitiet{
	char tentp[30];
	int nhietdo;
};
int main(int argc, char *argv[]) {
	struct thoitiet tt = {"Ha Noi", 35};
	struct thoitiet tt1 = {"Nam Dinh", 30};
	struct thoitiet tt2;
	memcpy(&tt2,&tt1,sizeof(struct thoitiet));
	printf("Nhet do cua thanh pho %s la %d\n", tt.tentp,tt.nhietdo);
	printf("Nhiet do cua thanh pho %s la %d\n", tt1.tentp,tt1.nhietdo);
	printf("Nhiet do cua thanh pho %s la %d\n", tt2.tentp,tt2.nhietdo);
	getch();
	return 0;
}
