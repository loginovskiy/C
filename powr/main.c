#include <stdio.h>
#include <stdlib.h>
int powr(int base, int degree);
int main()
{
    printf("%d\n", powr(3,3));
    return 0;
}

int powr(int base, int degree)
{
    if(degree == 0) return 1;
    if(degree%2 == 1) return base * powr(base, degree - 1);
    else return base * powr(base, degree/2);
}
