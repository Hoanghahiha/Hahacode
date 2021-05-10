//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int indexmin(int arr[],int size){
//	int j, min = arr[0];
//	for(j=0;j<size;j++){
//		if(arr[j]<min){
//			min=arr[j];
//		}
//	}
//	return min;
//}
//int main(int argc, char *argv[]) {
//	int ary[10];
//	int i,size;
//	for(i=0;i<10;i++){
//		printf("Nhap phan tu thu %d: ",i+1);
//		scanf("%d",&ary[i]);
//	}
//	printf("Phan tu min: %d\n",indexmin(ary,10));
//	return 0;
//}
#include <stdio.h>

int indexMin(int arr[], int size)
{
	int i, min;
	
	min=arr[0];
	
	for (i=0; i<size; i++)
	{
		if (min>arr[i])	min=arr[i];	
	}
	return min;
}

void main()
{
	int i, size;
	
	printf ("Enter to the size of array: ");
	scanf ("%d", &size);

	int arr[size];
	
	for (i=0; i<size; i++)
	{
		printf ("Enter value of section is %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	printf ("This min value of Array is: %d", indexMin(arr, size));
}
