#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6}},i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=a[i][j];
        }
    }
    printf("Sum of the 2D array is: %d\nAverage is : %.4f",sum,sum/9.0);
return 0;
}