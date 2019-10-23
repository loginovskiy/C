#include <stdio.h>
#define MAXLENGTH 100
#define TRUE 1
#define FALSE 0

int counter;
int getstr(char str[]);
int checkstr(char str[], int len);
int check(char str[], char tgt, int len);
int main()
{
    char str[MAXLENGTH];
    int len;
    len = getstr(str);
    printf("%slength: %d\n", str, len);
    printf("%s",checkstr(str, len)?"TRUE":"FALSE");
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
    if(c=='\n')str[i++]=c;
    str[i]='\0';
    return i;
}
int checkstr(char str[], int len)
{
    counter = 0;
    char c;
    while(counter<len)
    {
        c=str[counter++];
        if(c=='(' || c=='[' || c=='{' || c=='<')
        {
            if(check(str, c, len)==FALSE)return FALSE;
        }
    }
    return TRUE;
}
int check(char str[], char tgt, int len)
{
    char c;
    while(counter<len)
    {
        c=str[counter++];
        if(c=='(' || c=='[' || c=='{' || c=='<')
        {
             return check(str, c, len);
        }
        else if(c==')' || c==']' || c=='}' || c=='>')
        {
            switch(c)
            {
                case ')': c-=1;
                break;
                case ']': c-=2;
                break;
                case '}': c-=2;
                break;
                case '>': c-=2;
            }
        }
        return tgt==c;
    }
    //return FALSE;
}
