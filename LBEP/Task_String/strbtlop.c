#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int init(int ary[10]){
//	int i;
//	for(i=0;i<10;i++){
//		printf("Phan tu thu %d cua mang la: ",i+1);
//		scanf("%d", &ary[i]);
//	}
//}
int init(int ary[10]){
	int i;
	srand((int)time(0));
	for(i=0;i<10;i++){
		ary[i]=rand();
	}
	return 0;
}
int display(int ary[10]){
	int i;
	for(i=0;i<10;i++){
		printf("Phan tu thu %d co gia tri: %d\n", i+1,ary[i]);
	}
}
int getmax(int ary[10]){
	int max=ary[0];
	int i;
	for(i=0;i<10;i++){
		if(ary[i]>max)
		max=ary[i];
	}
	return max;
}
int avg(int ary[10]){
	int i, total=0;
	for(i=0;i<10;i++){
		total+=ary[i];
	}
	return total/10;
}
int find(int ary[10]){
	int x,i;
	printf("Nhap vao gia tri ban muon tim: ");
	scanf("%d", &x);
	for(i=0;i<10;i++){
		if(ary[i]==x){
			printf("Phan tu %d: %d\n", i+1,ary[i]);
		}
}
}
int main(int argc, char *argv[]) {
	int ary[10];
	int m= getmax(ary);
	init(ary);
	display(ary);
	printf("Max: %d\n", getmax(ary));
	printf("Average: %d\n", avg(ary));
	find(ary);
	return 0;
}
