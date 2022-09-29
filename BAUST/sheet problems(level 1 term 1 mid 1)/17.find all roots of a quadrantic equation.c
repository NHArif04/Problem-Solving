#include<math.h>
#include<stdio.h>
int main(){
    double a,b,c,d,r1,r2,rp,ip;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){r1=(-b+sqrt(d))/(2*a);r2=(-b-sqrt(d))/(2*a);
        printf("root1 = %lf\nroot2 = %lf\n",r1,r2);}
    else if(d==0){printf("root = %lf;\n",-b/(2*a));}
    else{rp=-b/(2*a);ip=sqrt(-d)/(2*a);
    printf("root1 = %lf+%lfi\nroot2 = %lf-%fi\n",rp,ip,rp,ip);}
    }
