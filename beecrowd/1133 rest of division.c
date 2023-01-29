#include <stdio.h>
int main() {
    int x,y,a,b;
    scanf("%d%d",&a,&b);
    a<b?(x=a,y=b):(x=b,y=a);
    while(x<y){
        if(x%5==2||x%5==3){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}