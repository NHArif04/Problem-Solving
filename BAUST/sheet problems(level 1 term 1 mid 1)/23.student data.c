#include<stdio.h>
int main () {
    int r,p,h,c,m; float t;char n[30],z='%';
    printf("Input the Roll Number of the Student :");
    scanf("%d",&r);
    printf("\nInput the Name of the Student :");
    scanf("%s",n);
    printf("\nInput the Marks of Physics,Chemistry an Computer Application :");
    scanf("%d%d%d",&p,&h,&c);m=p+h+c;
    printf("\nRoll No : %d\nName of Student : %s\nMarks in Physics : %d\n",r,n,p);
    printf("Marks in Chemistry : %d\nMarks in Computer Application : %d\n",h,c);
    printf("Marks = %d\nPercentage = %.2lf%c",m,t=m/3,z);
    if(t>=60)printf("\nDivision = First");
    else if(t>=50&&t<60)printf("\nDivision = Second");
    if(t>=40&&t<50)printf("\nDivision = Third");
    else printf("\nMarks is below or not in any Division");
}
