#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int any(char s1[], char s2[]);
int main()
{
    int position;
    char str[] = {'H','e','l','l','o','\0'};
    char str2[] = {'a','\0'};
    position = any(str, str2);
    printf("%d", position);
    return 0;
}

int any(char s1[], char s2[])
{
    int i,j;

    for(i=0; s1[i] != '\0'; i++)
    {
        for(j=0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])return i;
        }
    }
    return -1;
}
