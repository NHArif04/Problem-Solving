#include <stdio.h>
void update(int *a,int *b) {
    int x=*a,y=*b;
    (*a>*b)?printf(""): (x = x + y,y= x - y,x =x - y);
    *a=x,*b=y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a+b, a-b);

    return 0;
}
