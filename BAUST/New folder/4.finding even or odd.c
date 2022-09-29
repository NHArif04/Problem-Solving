#include<stdio.h>
int main()
{
	int a,t;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("the number is even\n");
		}
		else
			printf("the number is odd\n");
	t--;
	}
	return 0;
}
