#include <stdio.h>
#include <stdlib.h>

//setbits(int num, int p, int n, int exmpl);
void showbinary(int val);
int main()
{
    int num = 115;
    int exmpl = 110;
    showbinary(num);
    showbinary(exmpl);

    //setbits(num, 3, 5, exmpl);
    return 0;
}

//setbits(int num, int p, int n, int exmpl)
//{

//}

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
