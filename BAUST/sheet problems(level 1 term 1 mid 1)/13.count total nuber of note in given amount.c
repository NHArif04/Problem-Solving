#include<stdio.h>
int main () {
    int a[]={1000,500,200,100,50,20,10,5,2,1},i,m;
    printf("Enter an amount:");
        scanf("%d",&m);
    for (i=0;i<=10;i++)
        m/a[i]>0?printf("\n%d taka note count is : %d",a[i],m/a[i]):printf("");
        m=m%a[i];
    }
