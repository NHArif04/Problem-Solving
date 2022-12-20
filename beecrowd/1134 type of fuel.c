#include<stdio.h>
int main(){
    int a,x=0,y=0,z=0;
    while(scanf("%d",&a)!=EOF){
    if(a==4){
        break;
    }
    else{    
        if(a==1) x++;
        else if(a==2) y++;
        else if(a==3) z++;
        else continue;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",x,y,z);
return 0;
}