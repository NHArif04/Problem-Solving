#include<stdio.h>
int main () {
    int a,b;
    printf("Enter the values for coordinate point XY:\n");
    scanf("%d%d",&a,&b);
    if(a>0&&b>0)printf("first quadrant");
    if(a<0&&b>0)printf("second quadrant");
    if(a<0&&b<0)printf("third quadrant");
    if(a>0&&b<0)printf("fourth quadrant");
}
