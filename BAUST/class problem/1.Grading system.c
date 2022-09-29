#include<stdio.h>
int main()
{
	int a,t;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&a);
		if(a>80)
		{
			printf("A+\n");
		}
		else if(a>70)
		{
			printf("A\n");
		}
		else if(a>60)
		{
			printf("A-\n");
		}
		else if(a>50)
		{
			printf("B\n");
		}
		else if(a>40)
		{
			printf("C\n");
		}
		else if(a>33)
		{
			printf("D\n");
		}
		else
			printf("F\n");
	t--;
	}
	return 0;
}
