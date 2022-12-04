#include<stdio.h>
int print(int n){

    if(n<1){
        return 0;
    }
    //printf("%d ",n);  // We are not same bro
    print(n-1);
    printf("%d ",n);   // We are not same bro

}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
return 0;
}
