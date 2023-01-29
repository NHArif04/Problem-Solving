#include <stdio.h>
#include<math.h>
int DigitCounter(int n){
    int cnt=0;
    while(n!=0){
            n/=10;
            cnt++;
    }
    return cnt;
}
int main() {

    int n,j,i,k,l;
    while(1){
//using while loop to break program on condition n==0
    scanf("%d",&n);
    int numberOfDigits = DigitCounter(pow(2,2*n-2));
    if(n==0) break;
    for( i=0;i<n;i++){
        k=pow(2,i);
        l=1;
        l=l*k;
        for(j=0;j<n;j++){
            l=pow(2,j);
            l=l*k;
            if(j!=n-1){
                printf("%*d ",numberOfDigits,l);
// "%*d" is used to set width. after ", the first variable indicates the number of space it will take and second one value
// "5d%" constant width to take negative with after the value then => "%-5d"  & for variable width "%-*d"
            }
        else printf("%*d",numberOfDigits,l);
        }
        printf("\n");
    }
printf("\n");
}
}
