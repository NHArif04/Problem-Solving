#include<stdio.h>
int regist();
int stat();
int autoo();
int main(){
    extern int firster, last;
    printf("\nExternal variable %d %d",firster,last);
    stat();
    regist();
    autoo();
    return 0;
}
int first=10,last=20;

int regist(){
    register a=4;
    printf("\nRegister_var 4 is : %d",a);
}

int stat(){
    static a=5;
    if(a==6) return 0;
    printf("\nStatic_var 5 is : %d",a);
    a=a+1;
    stat(a);
}

int autoo(){
    auto a=1;
    printf("\nAuto variable 1 is: %d",a);
}