#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 50
#define NUMBER '0'
void push(double val);
double pop();
int getop(char s[]);
int main()
{
    int type;
    double op2;
    char s[MAXOP];
    while(type = getop(s) != EOF)
    {
        switch(type)
        {
            case NUMBER: push(atof(s));
            break;
            case '+': push(pop()+pop());
            break;
            case '*': push(pop()*pop());
            break;
            case '-': op2 = pop();
            push(pop() - op2);
            break;
            case '/': op2 = pop();
            if(op2!=0.0)
            {
                push(pop()/op2);
            }
            else printf("error, zero divisor\n");
            break;
            default: printf("Unknown command - %s\n");
            break;
    }
    #define MAXVAL 199
    int sp = 0;
    double val[MAXVAL];
    void push(double val)
    {
        if(sp>0)
        {
            val[sp++]=val;
        }
        else printd("Error, the stack is full");
    }
    double pop()
    {
        if(sp>0)
        {
            return val[--sp];
        }
        else
        {
            printf("the stack is empty");
            return 0.0;
        }
    }
    return 0;
}

int getch();
void ungetch(int num);
getop(char s[])
{

}
