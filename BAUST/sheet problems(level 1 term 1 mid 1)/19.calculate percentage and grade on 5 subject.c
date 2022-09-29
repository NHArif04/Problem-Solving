#include<stdio.h>
int main (){
    int b,c,d,e,f,s=0,i,a;char z='%';
    printf("Enter marks for physics, chemistry, biology, mathematics and computer:\n");
    scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
    if(b>100||c>100||d>100||e>100||f>100) printf("Wrong input");
    else { int t[]={b,c,d,e,f};
    for (i=0;i<5;i++) s+=t[i]; a=(s/5);
    if(a>=90&&a<=100)printf("percentage is: %d%c : grade A",a,z);
    else if(a>=80&&a<90)printf("percentage is: %d%c : grade B",a,z);
    else if(a>=70&&a<80)printf("percentage is: %d%c : grade C",a,z);
    else if(a>=60&&a<70)printf("percentage is: %d%c : grade D",a,z);
    else if(a>=40&&a<60)printf("percentage is: %d%c : grade E",a,z);
    else printf("percentage is: %d%c : grade is: F",a,z);}
}
