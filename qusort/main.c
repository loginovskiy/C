#include <stdio.h>
#include <stdlib.h>

void qusort(int arr[], int left, int right);
int main()
{
    void printarr(int arr[], int arrsize);
    int array[] = {4,1,0,3,7,5,2,6,10,9,8};
    int arrsize = sizeof(array)/sizeof(array[0]);
    qusort(array, 0, 10);
    printarr(array, arrsize);
    return 0;
}
void swapval(int arr[], int first, int second);
void qusort(int arr[], int left, int right)
{

    int l, r, op;
    l = left;
    r = right-1;
    op = right;
    if(l==r && arr[l]>arr[op])swapval(arr, l,op);
    if(l>=r)return;
    while(l<r)
    {
        while(arr[l] < arr[op] && l<right)l++;
        while(arr[r] > arr[op] && r>l)r--;
        if(l<r)swapval(arr, l, r);
    }
    if(l==r)swapval(arr, r, op);
    qusort(arr, left, r);
    qusort(arr, r+1, right);
}

void swapval(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void printarr(int arr[], int arrsize)
{
    for(int i=0; i<arrsize; i++)
    {
        printf("%d", arr[i]);
    }
}
