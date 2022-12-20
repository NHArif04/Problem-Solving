#include<stdio.h>
int main(){
    int num,prime=1;
    scanf("%d",&num);
    if(num<=1){
            prime=0;
    }
    else{
        for(int i=2; i<=(num/2);i++){
            if(num%i==0){
                prime=0;
            }
        }
    }
    (prime)?printf("\nPrime"):printf("\nNot Prime");
return 0;
}