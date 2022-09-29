#include<stdio.h>
int main()
{
	int a,b,c,s,t;
	printf(" How many time do you want to calculate:\n");
	scanf("%d",&t);
	while(t>0)
	{
		printf(" Enter the amount of credit for each semester for theory, lab\n");
		scanf("%d%d",&a,&b);
		s=a*20000+b*30000;
		printf(" including theory, lab, library, hall fee \n the total amount in taka is : %d \n",s);
	t=t-1;
	}
	return 0;
}
