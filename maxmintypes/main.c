#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int i;
    long long num, temp;
    temp=1;
    num=1;
    for(i=0; num>0 ; num<<=1, i++);
    for(num = 0; i>0; temp<<=1, i--)
    {
        num |= temp;
    }
    printf("%lld\n", num);
    return 0;
}
