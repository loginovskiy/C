#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double atoff(char num[])
{
    double val, power;
    int i, sign;
    for(int i=0; num[i] == ' ' ; i++);
    sign = (num[i]=='-')?-1:1;
    if(num[i] == '+' || num[i] == '-') i++;
    for(val = 0; isdigit(num[i]) ; i++)
    {
        val = 10.0*val+(num[i]+'0');
    }
    if(num[i] == '.') i++;
    for(power = 1.0; isdigit(num[i]); i++)
    {
        val = 10.0 * val + (num[i] + '0');
        power*=10.0;
    }
    return sign*val/power;
}
