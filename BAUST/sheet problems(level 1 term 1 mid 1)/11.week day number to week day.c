#include <stdio.h>
int main() {
   int c;
   printf("Enter a number of day count: ");
   scanf("%d", &c);
   printf("it's ");
    if (c==1)printf("saturday");
    else if (c==2)printf("sunday");
    else if (c==3)printf("monday");
    else if (c==4)printf("tuesday");
    else if (c==5)printf("wednesday");
    else if (c==6)printf("thursday");
    else if (c==7)printf("friday");
    else printf("%d is not a week day",c);
}
