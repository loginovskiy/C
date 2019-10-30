#include <stdio.h>
#include <ctype.h>
#define POSITION 3
int getbits(int num, int p, int n);
int main()
{
    int num = 00011010;
    int res = getbits(num, POSITION, 3);
    printf("%d", res);
    return 0;
}
int getbits(int num, int p, int n)
{
    return (num >> (p+1-n)) & ~(~0 << n);
}
