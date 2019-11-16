#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLINE 100
int getline(char str[], int lim);
int iindex(char str[], char pat[]);
char pattern[] = "ould";
int main()
{
    char line[MAXLINE];
    int found = 0;
    int ind;
    while(getline(line, MAXLINE)>0)
    {
        ind = iindex(line, pattern);
        if(ind>=0)
        {

            printf("%d\n", ind);
            found++;
        }
    }
    return found;
}
