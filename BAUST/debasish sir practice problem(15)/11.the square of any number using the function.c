#include<stdio.h>
int sqr(int n){
    return pow(n,2);
}
int main(){
    int a;
    printf("Enter a number to find square of it : ");
    scanf("%d",&a);
    printf("\nThe square of the number %d is : %d",a,sqr(a));
return 0;
}