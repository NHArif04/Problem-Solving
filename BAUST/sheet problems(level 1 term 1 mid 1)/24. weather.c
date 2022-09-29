#include<stdio.h>
int main () {
    int t;
    printf("Input a temperature :");
    scanf("%d",&t);
    if(t<0) printf("Freezing temperature");
    if(t>0&&t<=10) printf("Very cold weather");
    if(t>10&&t<=20) printf("Cold Weather");
    if(t>20&&t<=30) printf("Normal in Temp");
    if(t>30&&t<=40) printf("Its hot");
    if(t>40) printf("Its very hot");
}
