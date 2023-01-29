#include<stdio.h>
int main(){

    int d,t,s=0;
    scanf("%d",&d);
    while(d!=0){
        t=d%10;
        s+=t;
        d=d/10;
    }
    printf("%d\n",s);
}
