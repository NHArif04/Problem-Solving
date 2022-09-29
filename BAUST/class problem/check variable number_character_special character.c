#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>=65 && a<=90)||(a>=97 && a<=122))
	{
	printf("enter variable is character");
	}
	else if(a>=48 && a<=57)
	{
		printf("enter variable is Number");
	}
	else
	printf("enter variable is special character");
	return 0;
}
