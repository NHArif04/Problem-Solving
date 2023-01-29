#include <stdio.h>
int summachine(int a, int b, int c){
    if(a%13!=0){
        c+=a;
        a++;
    }
    if(a<=b){
            summachine(a,b,c);
    }
    return c;
}
int main() {
    int num1, num2, sum=0;
    scanf("%d%d",&num1,&num2);
    num1<num2?(num1,num2):(num1=num1+num2,num2=num1-num2,num1=num1-num2);;
    sum= summachine(num1, num2, sum);
    printf("%d\n",sum);
    return 0;
}
