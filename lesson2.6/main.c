#include <stdio.h>
#include <stdlib.h>
getbits(int x, int p, int n);
setbits(int num, int p, int n, int exmpl);
chengebits(int val, int exmpl);
void showbinary(int val);
int main()
{
    int num = 1;
    int exmpl = 110;
    showbinary(num);
    showbinary(exmpl);
    showbinary(setbits(num, 5, 3, exmpl));
    return 0;
}
getbits(int val, int p, int n)
{
    return (val>>(p+1-n) & ~(~0 << n));
}
setbits(int num, int p, int n, int exmpl)
{
    int temp;
    temp = (getbits(exmpl, 3, 3))<<(p+1-n);
    showbinary(temp);
    return changebits(num,temp);
}
void showbinary(int val)
{
    int mask=1;
    mask<<=6;
    for(int i=0; i<7; i++)
    {
        if((val & mask) == 0)printf("0");
        else printf("1");
        mask>>=1;
    }
    printf("\n");
}
changebits(int val, int exmpl)
{
    return val |= exmpl;
}
