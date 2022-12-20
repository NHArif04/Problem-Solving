#include<stdio.h>
int dp[100];
int fib(int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
int main(){
    unsigned int n,fb;
    //for(int i=0;i<100;i++)dp[i]=-1;
    memset(dp,-1,100*sizeof(dp[0])); //ms(variable_name, value, range_size);
    scanf("%u",&n);
    fb=fib(n);
    printf("\n%u",fb);
    return 0;
}