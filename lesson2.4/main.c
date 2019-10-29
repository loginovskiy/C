#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i,j,k;
    int u;
    char string[] = {'H', 'e', 'l', 'l', 'o','\0'};
    char exmpl[] = {'h','e','o','\0'};
    char exmplU[sizeof(exmpl)];
    for(i=0; exmpl[i]!='\0'; i++){
        if(isupper(exmpl[i]))exmplU[i]=tolower(exmpl[i]);
        else if(islower(exmpl[i]))exmplU[i]=toupper(exmpl[i]);
    }
        printf()
    for(i=0;exmpl[i]!='\0'; i++)
    {
        for(j=k=0; string[j]!='\0'; j++)
        if(string[j]!=exmpl[i])
        string[k++] = string[j];
        string[k] = '\0';
    }
    printf("%s\n", string);
    return 0;
}
