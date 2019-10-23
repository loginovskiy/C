#include <stdio.h>
#define MAXLENGTH 100
#define TRUE 1
#define FALSE 0

int counter;
getstr(char str[]);
checkstr(char str[]);

int main()
{
    char str[MAXLENGTH];
    int len;
    len = getstr(str);
    printf("%s", str);
    return 0;
}

int getstr(char str[])
{
    char c;
    int flag = FALSE;
    int i = 0;
    while(i<MAXLENGTH-2 && (c=getchar())!=EOF && c!='\n')
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
    if(c=="\n")str[i++]=c;
    str[i]='\0';
    return i;
}
