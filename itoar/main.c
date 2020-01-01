#include <stdio.h>
#include <stdlib.h>
void itoar(int num);
int sign(int num);
int main()
{
    int val = 46;
    itoar(sign(val));
    return 0;
}
int sign(int num)
{
    if(num<0)putchar('-');
    return (num<0)?num*-1:num;
}
void itoar(int num)
{
    int i;
    if((i=num/10)!=0)
    itoar(i);
    putchar(num%10+'0');
}
