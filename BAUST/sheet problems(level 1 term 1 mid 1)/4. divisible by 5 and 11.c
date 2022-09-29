#include<stdio.h>
int main(){
	int a;
	printf("Enter a Digit: ");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)printf("divisible");
    else if(a%5!=0 && a%11==0)printf("not divisible by 5");
    else if(a%5==0 && a%11!=0)printf("not divisible by 11");
	else printf("not divisible by 5 or 11");
}
