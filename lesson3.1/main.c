#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int binarysearch(int val, int array[]);
int main()
{
    int num = 4;
    int arr[] = {2,3,4,10,11,12,15};
    printf("%d", binarysearch(num,arr));
    return 0;
}
int binarysearch(int val, int array[])
{
    int low, middle, high;
    low=0;
    printf("%d", sizeof(array));
    high = sizeof(array)-1;
    while(low<high)
    {
        middle = (low+high)/2;
        if(array[middle]<val)low = middle + 1;
        else if(array[middle]>val)high = middle - 1;
        else return middle;
    }
    return -1;
}
