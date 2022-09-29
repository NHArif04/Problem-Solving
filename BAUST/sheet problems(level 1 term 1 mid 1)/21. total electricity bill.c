#include<stdio.h>
#include<math.h>
int main () {
    double c=0,u;
    printf("Enter amount of unit: ");
    scanf("%lf",&u);
    if (u<=50) c=c+(u*0.50);
    else if (u<=150&&u>50) c=25+(u-50)*0.75;
    else if (u<=250&&u>150) c=100+((u-150)*1.20);
    else c=220+((u-250)*1.50);
    printf("\nThe bill is: %lf",c);
}
