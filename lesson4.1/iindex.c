#include <stdio.h>
#include <stdlib.h>
int iindex(char str[],char pat[])
{
    int i, j, k;
    int first = -1;
    int flag;
    for(i=0; str[i] != '\0'; i++)
    {
        flag = 0;
        for(j=i, k=0; pat[k] != '\0' && str[j] == pat[k]; j++, k++)
        {
           if(flag == 0)
           {
                first = j;
                flag = 1;
           }
        }
        if(k>0 && pat[k] == '\0')
            return first;
    }
    return -1;
}
