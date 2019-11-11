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
    char str[] = {'a','-','c','1','-','4','A','-','C','\0'};
    char trgt[100];
    printf("%s %s", str, checkpattern(str)?"TRUE":"FALSE");
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
    char arr[2];
    int k;
    for(int i = 0; str[i] !='\0'; i++)
    {

        for(int temp=arr[0], k=0; temp<arr[2]; temp++, k++)
        {
            dest[k]=temp;
        }
    }
}
