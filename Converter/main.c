#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int convert(char string[]);
int main()
{
    char str[] = {'A','A','1','\0'};
    printf("%d\n",sizeof(str));
    printf("%d",convert(str));
    return 0;
}

int convert(char string[])
{
    int i,n;
    n=0;
    for(i=0; (string[i]>='0' && string[i]<='9') || (string[i]>='A' && string[i]<='F'); i++)
    {
        n=16*n+(string[i]<'9'?string[i]-'0':10+(string[i]-'A'));
    }
    return n;
}
