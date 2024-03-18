#include"Assignment5.h"

void maxrray(int *arr,int size);
void minrray(int *arr,int size);

int main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int input[n];
	eleccept(input,n);
	maxrray(input,n);
	minrray(input,n);
	return 0;
}

void maxrray(int *arr,int size)
{
	int max=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("Maximum of all the array elements is %d\n",max);
}

void minrray(int *arr,int size)
{
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	printf("Minimum of all the array elements is %d\n",min);
}
