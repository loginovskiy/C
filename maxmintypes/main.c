#include <stdio.h>
#include <limits.h>

int main()
{
    int num, temp, i;
    temp=1;
    num=1;
    for(i=0; num>0 ; num<<=1, i++);
    //printf("%d", i);
    for(num = 0; i>0; temp<<=1, i--)
    {
        num |= temp;
        //printf("%d %d\n",num,i);
    }
    printf("%d\n%d\n", INT_MAX, INT_MIN);
    printf("%d\n", num);
    return 0;
}
