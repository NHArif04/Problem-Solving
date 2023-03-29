#include <stdio.h>
int main() {
    int num1, num2, sum=0;
    scanf("%d%d",&num1,&num2);
    num1<num2?(num1,num2):(num1=num1+num2,num2=num1-num2,num1=num1-num2);;
    while(num1<=num2){
        if(num1%13!=0){
            sum+=num1;
        }
        num1++;
    }
    printf("%d\n",sum);
    return 0;
}
