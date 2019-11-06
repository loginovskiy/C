#include <stdio.h>
#include <stdlib.h>

int getright(int *val);
int getleft(int *val);
void moveright(int *val, int num);
void moveleft(int *val, int num);
void showbinary(int val);
void move(int *val, int num);
int main()
{
    int val = 11;
    showbinary(val);
    int *pointer = &val;
    moveright(pointer, 2);
    showbinary(val);
    printf()
    return 0;
}

void move(int *val, int num)
{
    num>=0?moveright(val, num):moveleft(val, (-1*num));
}
int getright(int *val)
{
    return *val & ~(~0 << 1);
}
int getleft(int *val)
{
    return *val;
}
void moveright(int *val, int num)
{
    int temp;
    for(int i=0; i<num; i++)
    {
        temp = getright(val)!=0?(getright(val))<<7:0;
        *val>>=1;
        if(val!=0)*val |= temp;
    }
}
void moveleft(int *val, int num)
{
    int temp;
    temp = getleft(val);
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


