#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double atoff(char num[])
{
    double val, power, epower, eval;
    int i, sign, exposign;
    for(i=0; num[i] == ' ' ; i++);
    sign = (num[i]=='-')?-1:1;
    if(num[i] == '-') i++;
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
    epower = 1.0;
    if(num[i] == 'e' || num[i] == 'E')
    {
        i++;
        exposign =(num[i]=='-')?-1:1;
        if(num[i] == '+' || num[i] == '-') i++;
        for(eval = 0; isdigit(num[i]) && num[i]!='\0';i++)
        {
            eval= 10*eval+(num[i]-'0');
        }
        if(exposign<0)for(; eval>=0; eval--) epower/=10;
        else for(; eval >=0 ; eval--)epower*=10;
    }
    return (sign*val/power)*epower;
}
