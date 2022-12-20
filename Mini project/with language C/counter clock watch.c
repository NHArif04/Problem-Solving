#include<stdio.h>
#include "my_header_file.h"

int main(){
    int h=0,m=0,s=0,ms=0;
    printf("Enter Hour, Minute, Second: ");
    scanf("%d%d%d",&h,&m,&s);
    do{
        clr(); //this is my owned defined function defined in my_header_file.h file here, system("cls") can be used 
        printf("\n####################### Stop Watch #######################");
        printf("\n#                                                        #");
        printf("\n#                   %.2d : %.2d : %.2d : %.2d                    #",h,m,s,ms*10);
        printf("\n#                                                        #");
        printf("\n##########################################################\n");
        Sleep(10);
        if(ms==0 && s!=0){
            ms=10;
            s--;
        }
        if(s==0 && m!=0){
            s=clock_cycle-1;
            m--;
        }
        if(m==0 && h!=0){
            m=clock_cycle-1;
            h--;
        }
        ms--;
    }while( h>0 || m>0 || s>0 || ms>0 );
    printf("Count is over.\nThank you.\nMyself Md. Nahid");
    getch();
return 0;
}