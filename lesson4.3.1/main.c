#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXDEPTH 10
#define STACKSIZE 100
#define TEMPSIZE 10
#define NUMBER '0'

double stack[STACKSIZE];
char temp[TEMPSIZE];
void push(double val);
char getch(char str[]);
void cleartemp();
double pop();
void ungetch();
int getop(char string[]);
int sp = -1;
int tp = 0;
int getchiter = 0;
int main()
{
    char str[] = {'2', ' ', '2', ' ', '+', ' ', '1', ' ', '-', '\n'};
    char c;
    int t;
    while((c=getop(str)) !='\0')
    {
        switch(c)
        {
            case NUMBER:
                push(atof(temp));
                cleartemp();
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                t = pop();
                push(pop() - t);
                break;
            case '/':
                t = pop();
                push (pop()/t);
                break;
            case '\n':
                printf(".8f", pop());
        }
    }
    return 0;
}
void push(double val)
{
    if (sp>=STACKSIZE)printf("the stack is full");
    else stack[++sp] = val;
}
double pop()
{
    if(sp<0)printf("the stack is empty");
    else return stack[sp--];
}
void cleartemp()
{
    tp=0;
}
int getop(char string[])
{
    char c;
    while((c=getch(string))!=' ')
    {
        temp[tp++] = c;
    }
    if(!isdigit(c) && c!=' ')ungetch();
    if(c==' ')return '0';
    else
    {
        //ungetch();
        return c;
    }
}
char getch(char str[])
{
    if(getchiter<TEMPSIZE)return str[getchiter++];
}
void ungetch()
{
    tp++;
}
