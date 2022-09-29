#include<stdio.h>
int main () {
    char a;
    printf("Input a grade :");
    scanf("%c",&a);
    if(a=='e'||a=='E') printf("\nYou have choosen : Excellent ");
    if(a=='v'||a=='V') printf("\nYou have choosen : Very Good ");
    if(a=='g'||a=='G') printf("\nYou have choosen : Good ");
    if(a=='a'||a=='A') printf("\nYou have choosen : Average ");
    if(a=='f'||a=='F') printf("\nYou have choosen : Fail ");
}
