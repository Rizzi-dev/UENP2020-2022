#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y = 0;
    int *p = &y;

    x = *p;
    x = 10;
    (*p)++;
    //x-9
    x--;
    printf("%d ", *p);
    //1+9
    (*p) += x;
    printf("%d ", y);
    p = &x;
    //0
    printf("%d ", &x == p);

    return 0;
}
