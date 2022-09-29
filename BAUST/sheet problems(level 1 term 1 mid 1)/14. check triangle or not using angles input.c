#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter angles of a triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    ((a!=0||b!=0||c!=0) && (a+b+c==180))?
    printf("valid triangle\n"):printf("invalid triangle\n");
    }
