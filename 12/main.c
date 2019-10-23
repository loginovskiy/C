#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 1000
#define TRUE 1
#define FALSE 0
#define TABLENGTH 3
char string[MAXLENGTH];
getstring(void);
void detab(void);
void showstring(void);
int main()
{
    int len;
    len = getstring();
    showstring();
    detab();
    return 0;
}
int getstring(void)
{
    int i,c, flag;
    i=0;
    flag=FALSE;
    while(i<MAXLENGTH-1 && (c=getchar())='\n' && c != EOF)
    {
        if(c!=' ')
        {
            string[i++] = c;
            flag = FALSE;
        }
            else if(flag == FALSE)
        {
            string[i++] = c;
            flag = TRUE;
        }
        if(c=='\n')string[i++] = c;
        string[i] = '0';
    }
}
void showstring(void)
{
    printf("%s", string);
}
