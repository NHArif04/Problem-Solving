#include<stdio.h>
int main(){
    int real;
    printf("Enter a number to reverse it:");
    scanf("%d",&real);
    printf("\n");
    while(real){
        printf("%d",real%10);
        real/=10;
    }
}