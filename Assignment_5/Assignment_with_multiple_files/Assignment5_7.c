#include"Assignment5.h"

void sortarray(int *arr,int size);

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int input[n];
	eleccept(input,n);
	sortarray(input,n);
	eleprint(input,n);
	return 0;
}

void sortarray(int *arr,int size)
{
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

