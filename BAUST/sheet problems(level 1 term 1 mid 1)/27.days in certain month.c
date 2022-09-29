#include <stdio.h>
int main() {
   int c;
   printf("Enter a number: ");
   scanf("%d", &c);
   printf("Month have ");
   if (c==1)printf("31");
    else if (c==2)printf("28\29");
    else if (c==3)printf("31");
    else if (c==4)printf("30");
    else if (c==5)printf("31");
    else if (c==6)printf("30");
    else if (c==7)printf("31");
    else if (c==8)printf("31");
    else if (c==9)printf("30");
    else if (c==10)printf("31");
    else if (c==11)printf("30");
    else if (c==12)printf("31");
   else printf("%d is wrong input",c);printf(" days");
}
