#include<stdio.h>
int main(){
    int note[]={1000,500,200,100,50,20,10,5,2,1},count,amount,i=0;
    printf("Enter the amount : ");
    scanf("%d",&amount);
    while(amount){
        count=amount/note[i];
            if(count) printf("Number of %d note is : %d\n",note[i],count);
            amount%=note[i++];
    }
return 0;
}