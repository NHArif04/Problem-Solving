/**A c program to calculate the sum inside of given string input*/
#include<stdio.h>
#include<string.h>

int main(){
    int t,a[2],sum,n;
    char s[13];
    scanf("%d",t);
    while(t){ //using while for test case
        sum=0;
        scanf("%s",s);
        for(int i=0;i<14;i++){ //using loop to find the integer inside the string
            if(s[i]>='0'&&s[i]<='9'){
                for(int j=0;j<=2;j++){ //giving a formate to integer values
                    n+=(int)s[i];
                    a[j]=n;
                sum+=a[j];
                }
            }
        printf("%d\n",sum);
        }
    t--;
    }
    return 0;
}
