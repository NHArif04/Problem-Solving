#include<stdio.h>
int main(){
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31},day=1,month=1;
    printf("######################## Welcome to Calender ########################\n");
    for(int i=0; i<12; i++){
        printf("\n******************** %s ********************\n",*month[i]);
        printf("Sat    Sun    Mon    Tue    Wed    Thu    Fri\n");
        for(day = 1; day<=daysInMonth[i];day++){
            printf("%.2d    ",day);
            if(day%7==0) printf("\n");
        }
    }
return 0;
}