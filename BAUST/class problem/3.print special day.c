#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&t);
	printf("enter the date and month:");
	while(t>0)
	{
		scanf("%d %d",&a,&b);
		if(a==1 && b==1)
		{
			printf("January\n");
		}
		else if(a==2 && b==1)
		{
			printf("February\n");
		}
		else if(a==3 && b==1)
		{
			printf("March\n");
		}
		else if(a==4 && b==1)
		{
			printf("April\n");
		}
		else if(a==5 && b==1)
		{
			printf("May\n");
		}
		else if(a==6 && b==1)
		{
			printf("June\n");
		}
		else if(a==7 && b==1)
		{
			printf("July\n");
		}
		else if(a==8 && b==1)
		{
			printf("August\n");
		}
		else if(a==9 && b==1)
		{
			printf("September\n");
		}
		else if(a==10 && b==1)
		{
			printf("October\n");
		}
		else if(a==11 && b==1)
		{
			printf("November\n");
		}
		else if(a==12 && b==1)
			printf("December\n");
		else
			printf("not a special day");
	t--;
	}
	return 0;
}
