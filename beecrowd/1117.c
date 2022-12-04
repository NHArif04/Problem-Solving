/**mean value of two numbers that are valid by the range [0,10]*/
#include <stdio.h>
int main() {
    float a[2],n,avg;
    int i=0;
    while(1){
        scanf("%f",&n);
        if(n>0&&n<=10){
            i++;
            if(i<=2){
                a[i]=n;
                if(i>=2){
                    break;
                }
            }
        }
        else{
            printf("nota invalida\n");
        }
    }
    avg=((a[1]+a[2])/2);
    printf("media = %.2f\n",avg);
    return 0;
}
