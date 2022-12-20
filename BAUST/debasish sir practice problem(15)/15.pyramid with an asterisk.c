#include<stdio.h>
int main(){
    int n;
    printf("Enter the size/height of asterisk pyramid :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}