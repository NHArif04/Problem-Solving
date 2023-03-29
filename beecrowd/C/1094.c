#include <stdio.h>
int main() {
   int n,t,i;
   float c=0,r=0,s=0;
   char a;
   scanf("%d",&t);
   for(i=0;i<t;i++){
       scanf("%d %c",&n,&a);
       if(a=='C'){
           c+=n;
       }
       if(a=='R'){
           r+=n;
       }
       if(a=='S'){
           s+=n;
       }
   }
    printf("Total: %.0f cobaias\n",(c+r+s));
    printf("Total de coelhos: %.0f\n",c);
    printf("Total de ratos: %.0f\n",r);
    printf("Total de sapos: %.0f\n",s);
    printf("Percentual de coelhos: %.2f %\n",(float)(c*100/(c+r+s)));
    printf("Percentual de ratos: %.2f %\n",(float)(r*100/(c+r+s)));
    printf("Percentual de sapos: %.2f %\n",(float)(s*100/(c+r+s)));
}
