#include <stdio.h>
#include <stdlib.h>
#define dprint(expr) printf(#expr " = %g\n", (double)expr)
int main()
{
    dprint(22/2);
    return 0;
}
