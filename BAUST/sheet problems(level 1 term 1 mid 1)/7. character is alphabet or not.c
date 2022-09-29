#include <stdio.h>
int main() {
   char c;
   printf("Enter a character: ");
   scanf("%c",&c);
    if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))printf("\n\"%c\" is an alphabet",c);
    else printf("\n\"%c\" is not an alphabet",c);
}
