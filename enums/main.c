#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum boolean{FALSE, TRUE};
    int a,b;
    a=10;
    b=11;
    printf("%d", a<b?TRUE:FALSE);
    return 0;
}
