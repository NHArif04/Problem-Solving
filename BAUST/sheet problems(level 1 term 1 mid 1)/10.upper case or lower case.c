#include <stdio.h>
int main() {
   char c;
   printf("Enter a character: ");
   scanf("%c", &c);
    if(c>='a' && c<='z')printf("\n%c is lowecase alphabet\n", c);
    if(c>='A' && c<='Z')printf("\n%c is uppercase alphabet\n",c);
}
