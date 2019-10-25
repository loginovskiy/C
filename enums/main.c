#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum boolean{FALSE, TRUE};
    int a,b;
    a=10;
    b=11;
    char str[]="123";//*{'1','2','3','\0'}*;

    printf("%d", a<b?TRUE:FALSE);
    printf("\nstrlen: %d", strlen(str));
    return 0;
}
