#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number to multiply using pointer:");
    scanf("%d%d",&a,&b);
    int *pa=&a,*pb=&b;
    printf("\nThe multiplication of given two number is : %d",*pa**pb);
return 0;
}