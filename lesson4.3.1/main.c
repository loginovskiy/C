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
    char str[] = {'2', ' ', '2', ' ', '+', ' ', '1', ' ', '-', '\0'};
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
            case 'c':
                continue;
            default:
                printf("Wrong enter");
                return -1;
        }
    }
    printf("%.4f", pop());
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
    while(isdigit(c=getch(string))!='\0' && c!= ' ')
    {
        temp[tp++] = c;
    }
    if(c == ' ' && isdigit(string[getchiter-2])) return NUMBER;
    else if(c == '+' || c == '-' || c == '*' || c == '/')
        return c;
    else if(c == '\0')return c;
    else return 'c';
}
char getch(char str[])
{
    if(getchiter<TEMPSIZE)return str[getchiter++];
}
void ungetch()
{
    getchiter++;
}
