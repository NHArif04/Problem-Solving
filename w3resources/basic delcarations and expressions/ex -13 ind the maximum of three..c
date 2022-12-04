#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z, result, max;
    printf("\nInput the first integer: ");
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;
}
