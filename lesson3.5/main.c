#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
void itobi(int val, char num[]);
void reverse(char num[]);
int main()
{
    int val = 123;
    char num[50];
    itobi(val, num);
    printf("%s", num);
    return 0;
}

void itobi(int val, char num[])
{
    int i=0;
    unsigned int val1;
    char digit;
    if(val<0)
    {
        digit= '-';
        val1 =-val;
    }
    do
    {
        num[i++] = val1%16+'0';
    }while((val1/=16)>0);
    num[i++]= digit;
    num[i]='\0';
    reverse(num);
}

void reverse(char num[])
{
    int i;
    int p = 0;
    while(num[++p]!='\0');
    char temp[50];

    for(i=0, p--; num[i]!='\0'; i++, p--)
    {
        temp[p] = num[i];
    }
    temp[i] = '\0';
    for(i=0;temp[i]!='\0';i++)num[i]=temp[i];
}
