#include <stdio.h>
#include <stdlib.h>

int getbits(int x, int p, int n);
int invertbits(int val, int n);
int setbits(int num, int p, int n);
void showbinary(int val);
int main()
{
    int val = 3;
    showbinary(val);
    val = setbits(val, 3, 3);
    showbinary(val);
    return 0;
}
int getbits(int x, int p, int n)
{
    return (x>>(p+1-n) & ~(~0 << n));
}
int invertbits(int val, int n)
{
    return ~val & ~(~0 << n);
}
int setbits(int num, int p, int n)
{
    int temp;
    temp = (getbits(num, p, n));
    temp = invertbits(temp, n)<<p+1-n;
    showbinary(temp);
    return changebits(num,temp, p, n);
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
changebits(int val, int exmpl, int p, int n)
{
    int mask =  ~(~0<<p+1-n);
    val &= mask;
    showbinary(val);
    return val |= exmpl;
}
