#include<stdio.h>
int main()
{
	int a,t;
	scanf("%d",&t);
	while(t>=0)
	{
		scanf("%d",&a);
		if(a%8==0)
		{
			printf("divisible by 8\n");
		}
		else
			printf("Not divisible by 8\n");
	t--;
	}
	return 0;
}
