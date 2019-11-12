#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
#define QSIZE 3
int checkpattern(char str[]);
void extract(char str[], char dest[]);
int main()
{
    char str[] = {'a','-','g','1','-','4','A','-','J','\0'};
    char trgt[100];
    extract(str, trgt);
    printf("%s", trgt);
    return 0;
}
int checkpattern(char str[])
{
    int counter = 0;
    if(strlen(str)%3 != 0)return FALSE;
    for(int i=0; str[i] !='\0'; i++)
    {
        counter++;
        if(!isdigit(str[i]) && !isalpha(str[i]) && str[i] != '-')return FALSE;
        if((counter != 2 && str[i] == '-') || (counter == 2 && str[i]!='-'))return FALSE;
        if(counter == 3)counter = 0;
    }
    return TRUE;
}
void extract(char str[], char dest[])
{
    if(!checkpattern(str))return;
    int k=0;
    for(int i = 0; str[i] !='\0'; i++)
    {
        if(str[i] == '-')
        {
            for(int temp=str[i-1]; temp<=str[i+1]; temp++, k++)
            {
                dest[k]=temp;
            }
        }
    }
    dest[k] ='\0';
}
