#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int productcode;
	float oderamount, rate=0.0;
	printf("\nPlease enter the product code: ");
	scanf("%d", &productcode);
	printf("Please enter the oder amount: ");
	scanf("%f", &oderamount);
	
	if(productcode==1)
	{
	if(oderamount>=500)
	rate=0.12;
	else if(oderamount>=300)
	rate=0.08;
	else
	rate=0.02;
	}
	else if(productcode==2)
	{
	if(oderamount>=2000)
	rate = 0.10;
	else if(oderamount>=1500)
	rate = 0.05;
	}
	else if(productcode==3)
	{
	if(oderamount>=5000)
	rate=0.10;
	else if(oderamount>=2500)
	rate=0.05;
	}
	oderamount -= oderamount*rate;
	printf("The net oder amount is %.2f\n", oderamount);
	return 0;
}
