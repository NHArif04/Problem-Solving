#include<stdio.h>
#include "my_header_file.h"

int main(){
    int hour, minute, second,h=0,m=0,s=0;
    printf("Enter Hour, Minute, Second: ");
    scanf("%d%d%d",&hour,&minute,&second);
    while(hour != h || minute != m || second != s){
        clr();  //this is not a built-in-function see my_header_file
        printf("\n####################### Stop Watch #######################");
        printf("\n#                                                        #");
        printf("\n#                      %.2d : %.2d : %.2d                      #",h,m,s);
        printf("\n#                                                        #");
        printf("\n##########################################################\n");
        sleep(1);
        s++;
        if(s==clock_cycle){
            s=0;
            m++;
        }
        if(m==clock_cycle){
            m=0;
            h++;
        }
    }
return 0;
}