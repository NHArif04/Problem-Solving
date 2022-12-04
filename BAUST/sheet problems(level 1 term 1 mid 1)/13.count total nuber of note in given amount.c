#include<stdio.h>
int main () {
    int a[]={1000,500,200,100,50,20,10,5,2,1},i,m;
    printf("Enter an amount:");
        scanf("%d",&m);
    for (i=0;i<=10;i++){
        if(m/a[i])printf("\n%d taka note count is : %d",a[i],m/a[i]);
        m=m%a[i];
    }
    return 0;
}
