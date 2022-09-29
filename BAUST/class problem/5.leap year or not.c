#include<stdio.h>
int main()
{
	int a,t;
	scanf("%d",&t);
	while(t>=0)
	{
		scanf("%d",&a);
		if(a%400==0)
		{
			printf("a leap year\n");
		}
		else if(a%4==0 && a%100!=0)
		{
			printf("a leap year\n");
		}
		else
		printf("not a leap year\n");
	t--;
	}
	return 0;
}
