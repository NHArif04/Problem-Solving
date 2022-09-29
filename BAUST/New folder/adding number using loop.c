#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        c=a%10;
        b=(a-c)/10;
        d=d+c;
        a=b;
    }
    printf("%d",d);
}
