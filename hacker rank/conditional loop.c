#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    (a>b)?(a=a,b=b):(a=a+b,b=a-b,a=a-b);
    for(b=b;b<=a;b++){
    if(a>0&&a<=9||b>0&&b<=9){
    if(b==1) printf("one\n");
    if(b==2) printf("two\n");
    if(b==3) printf("three\n");
    if(b==4) printf("four\n");
    if(b==5) printf("five\n");
    if(b==6) printf("six\n");
    if(b==7) printf("seven\n");
    if(b==8) printf("eight\n");
    if(b==9) printf("nine\n");
    }
    else {
            (b%2==0)?printf("even\n"):printf("odd\n");
    }}
    return 0;
}
