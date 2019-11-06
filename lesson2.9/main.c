#include <stdio.h>
#include <stdlib.h>

void showbinary(int val);
int hitcount(unsigned int x);
int main()
{
    unsigned int num = 11;
    showbinary(num);
    printf("%d",hitcount(num));
    return 0;
}

int hitcount(unsigned int x)
{
    int b=0;
    while(x != 0)
    {
        if(x &= (x-1));
        b++;
    }
    return b;
}
void showbinary(int val)
{
    int mask=1;
    mask<<=7;
    for(int i=0; i<8; i++)
    {
        if((val & mask) == 0)printf("0");
        else printf("1");
        mask>>=1;
    }
    printf("\n");
}
