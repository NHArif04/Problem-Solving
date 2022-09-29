#include<stdio.h>
int main (){
    int a,b,c,result;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
        result = b>a?(b>c?b:c):a;
        printf("\nMaximum Number is %d\n",result);
}
