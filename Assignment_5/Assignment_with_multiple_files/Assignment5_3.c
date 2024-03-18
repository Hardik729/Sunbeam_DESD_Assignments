#include "Assignment5.h"

void reverseArray(int *arr,int size);

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int input[n];
    eleccept(input,n);
    printf("Array elements before reverse:\n");
    eleprint(input,n);
    reverseArray(input,n);
    printf("Array elements after reverse:\n");
    eleprint(input,n);
    return 0;
}

void reverseArray(int *arr,int size)
{
    int start=0;
    int end=size-1;
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

