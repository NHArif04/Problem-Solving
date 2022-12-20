#include<stdio.h>
int main(){
    int n;
    printf("Enter the size/height of asterisk triangle :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}