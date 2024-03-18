#include "Assignment5.h"

int unirray(int *arr,int size);

int main()
{
    int n,total;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int input[n];
    eleccept(input,n);
    total=unirray(input,n);
    printf("Unique no. of elements in the given array is %d\n",total);
    eleprint(input,total);
    return 0;
}

int unirray(int *arr,int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        int current=arr[i];
        int isDuplicate=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]==current)
            {
                isDuplicate=1;
                break;
            }
        }
        if(!isDuplicate)
        {
            arr[count]=current;
            count++;
        }
    }
    
    return count;
}

