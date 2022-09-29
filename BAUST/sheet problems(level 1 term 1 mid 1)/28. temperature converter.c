#include<stdio.h>
void c2f(int a){
    float d=(((a*9)/5)+32);
    printf("\n%.2f\n",d);}
void f2c(int a){
    float d=(((a-32)*5)/9);
    printf("\n%.2f\n",d);}
int main () {
    int a,s;
    printf("Enter the temperature:");
    scanf("%d",&a);
    printf("\nPress 1 for Celsius to Fahrenheit\nPress 2 for Fahrenheit to Celsius\n");
    scanf("%d",&s);
    switch(s){
        case 1: c2f(a);
            break;
        case 2: f2c(a);
            break;
        default: printf("Wrong Value\n");
        main();}}
