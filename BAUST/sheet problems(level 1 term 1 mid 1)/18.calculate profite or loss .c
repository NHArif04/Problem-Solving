#include<stdio.h>
int main(){
    int c,s;
    printf("Enter Cost price: ");
    scanf("%d",&c);
    printf("Enter Selling price: ");
    scanf("%d",&s);
(s>c)?printf("Profit = %d",s-c):(c>s)?printf("Loss = %d",c-s):printf("No Profit No Loss.");
}
