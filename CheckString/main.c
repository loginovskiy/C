#include <stdio.h>
#define MAXLENGTH 100
#define TRUE 1
#define FALSE 0

int counter;
int pointer=-1;
char stack[MAXLENGTH];
void push(char val);
char pop();
int getstr(char str[]);
int checkstr(char str[], int len);
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
void push(char val)
{
    if(pointer<MAXLENGTH)
    {
       stack[++pointer]=val;
    }
    else;
}
char pop()
{
    if(pointer>-1)
    {
        return stack[pointer--];
    }
    else return -1;
}
int checkstr(char str[], int len)
{
    char c;
    int status=TRUE;
    counter = 0;
    while(counter<len)
    {
        c=str[counter++];
        if(c=='(' || c=='[' || c=='{' || c=='<')
        {
            push(c);
        }
        if(c==')' || c==']' || c=='}' || c=='>')
        {
            if(pointer<0)return FALSE;
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
            status = (pop() == c);
        }
    }
    return status;
}
