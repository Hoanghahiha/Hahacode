#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("So hang cua tam giac la = ");
    scanf("%d",&n);
for (i=n;i>0;i--)
    {
    for (j=i;j>0;j--)
            printf("%d",j);
            printf("\n");
    }
}
