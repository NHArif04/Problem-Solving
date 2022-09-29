#include<stdio.h>
int main(){
	int a;
	printf("Enter a Number:");
	scanf("%d",&a);
	if(a<0)printf("negative\n");
	else if(a>0)printf("positive\n");
	else printf("zero\n");
}
