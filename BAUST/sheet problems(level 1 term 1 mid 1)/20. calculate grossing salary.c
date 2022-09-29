#include<stdio.h>
int main () {
    int basic,da,hra,t;
    printf("Enter the amount of basic salary:\n");
    scanf("%d",&basic);
    if (basic<=10000) {hra=(basic*20)/100;da=(basic*80)/100;}
    else if (basic<=10000) {hra=(basic*25)/100;da=(basic*90)/100;}
    else {hra=(basic*30)/100;da=(basic*95)/100;}
    t=basic+da+hra;
    printf("Grossing salary is: %d",t);
}
