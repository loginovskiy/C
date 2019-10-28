#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i,j,k;
    int u;
    char string[] = {'H', 'e', 'l', 'l', 'o','\0'};
    char string2[] = {'h','e','o','\0'};
    for(i=0;string2[i]!='\0'; i++)
    {
        for(k=j=0; string[j] != '\0'; j++)
            u = isupper(string[j]);
            printf("%d\n", u);
            //printf("%d: %c\n",u , string[j]);
            if(string[j]!=string2[i]);
            string[k++] = string[j];
        string[k]='\0';
    }
    printf("%s\n", string);
    return 0;
}
