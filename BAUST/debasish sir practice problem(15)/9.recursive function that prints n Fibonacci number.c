#include<stdio.h>
int fib(int n){
    if(n>1){
        return fib(n-1)+fib(n-2);
    }
    else{
        return n;
    }
}

int main(){
    int n;
    printf("Enter a number to find Nth fibonacci number: ");
    scanf("%d",&n);
    printf("\n%dth fibonacci number is : %d",n,fib(n-1)); //here fibonacci starts from 0, this is why i use here in function parameter (n-1)
return 0;
}
