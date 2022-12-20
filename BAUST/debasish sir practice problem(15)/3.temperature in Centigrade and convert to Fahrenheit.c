#include<stdio.h>
int main(){
     int F,C;
     printf("Enter temperature : ");
     scanf("%d",&C);
     F=(C*9/5)+32;
     printf("\nConverted temperature in Fahrenheit is: %d\n",F);
return 0;
}