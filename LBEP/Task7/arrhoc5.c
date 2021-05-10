#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
	char str[30];
	int i, n, vow_a, vow_e, vow_i, vow_o, vow_u, vow, cons;
	float vow_percent;
	printf("\nEnter a tring: ");
	gets(str);
	n=strlen(str);
	vow_a = vow_e = vow_i = vow_o = vow_u = vow = cons = 0;
	for (i=0; i<n ; i++)
	{
		switch (toupper(str[i]))
		{
		case 'A':
			vow_a++;
			break;
		case 'E':
			vow_e++;
			break;
		case 'I':
			vow_i++;
			break;
		case 'O':
			vow_o++;
			break;
		case 'U':
			vow_u++;
			break;
		default:
			if ( (((int)str[i]>=65)&&((int)str[i]<=90)) || (((int)str[i]>=97)&&((int)str[i]<=122)) )
			{
				cons++;
			}
			break;		
		}
	}
	vow = vow_a + vow_e + vow_i + vow_o + vow_u;
	vow_percent=((float)vow/(float)(vow+cons))*100;
	printf("\n\nThe number of each vowel in entered string is:\n\n");
	printf("A: %d, E: %d, I: %d, O: %d, U: %d. Total: %d",vow_a, vow_e, vow_i, vow_o, vow_u, vow);
	printf("\n\nThe percentage of vowels is: %4.2f",vow_percent);
	printf("\n\nThe number of consonants in entered string is: %d",cons);
	printf("\n\nThe percentage of consonants is: %4.2f",100-vow_percent);
	getch();
}
	
