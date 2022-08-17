#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 10;
    int *p1 = &x;
    int *p2 = &y;

    p1=NULL;
    p2=NULL;
        //e
        x = p1 || p2;
    printf("%d", x);

    return 0;
}
