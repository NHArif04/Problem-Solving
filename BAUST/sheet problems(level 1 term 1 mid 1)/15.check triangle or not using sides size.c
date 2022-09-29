#include<stdio.h>
int main(){
   int a,b,c;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&a,&b,&c);
    (a+b>c&&b+c>a&&a+c>b)?
    printf("Valid Triangle\n"):printf("Invalid Triangle\n");
}
