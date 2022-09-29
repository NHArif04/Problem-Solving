#include<stdio.h>
int main(){
    int c,s;
    printf("Transaction Amount on Buy : ");
    scanf("%d",&c);
    printf("Transaction Amount on Sell : ");
    scanf("%d",&s);
(s>c)?printf("You can book your profit amount : %d",s-c):(c>s)?printf("Loss = %d",c-s):printf("No Profit No Loss.");
}
