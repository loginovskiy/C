#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAXLINE 100
int getline(char str[], int len)
{
    char c;
    int flag = FALSE;
    int i = 0;
    while(i<MAXLINE-2 && (c=getchar())!=EOF && c!='\n')
    {
        if(c!=' ')
        {
            str[i++] = c;
            flag = FALSE;
        }
        else if(flag == FALSE)
        {
            str[i++] = c;
            flag = TRUE;
        }
    }
    if(c=='\n')str[i++]=c;
    str[i]='\0';
    return i;
}
