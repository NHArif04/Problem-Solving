#include<stdio.h>
int main(){
    int num=1,prime,Num;
    scanf("%d",&Num);
    while(Num>=num++){
        prime=1;
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
        (prime)?printf("\n%d is Prime",num):printf("\n%d is Not Prime",num);
    }
return 0;
}