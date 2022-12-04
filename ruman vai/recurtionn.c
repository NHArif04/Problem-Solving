#include<stdio.h>
int data[1000];
int fibo(int n){
    if(n<2){
        data[n]=1;
        return;
    }
    int ret = data[n];
    if(ret == -1)
        ret = fibo(n-1) + fibo(n-2);

}
int main()
{
    int n;
    scanf("%d",&n);
    memset(data,-1,sizeof(data));
    fibo(n);
    for(int i=1;i<=100;i++){
        printf("%d ",data[i]);
    }
return 0;
}
