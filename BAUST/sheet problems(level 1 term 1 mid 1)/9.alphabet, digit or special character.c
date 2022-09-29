#include <stdio.h>
int main() {
   char c;
   printf("Enter a character: ");
   scanf("%c", &c);
    if ((c>='a' && c<='z')||(c>='A' && c<='Z'))printf("\n%c is an alphabet\n", c);
    else if (c>='0' && c<='9')printf("\n%c is a number\n", c);
    else printf("\n%c is a special character\n",c);
   }
