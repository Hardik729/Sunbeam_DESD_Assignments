#include"Assignment5.h"

void maxrray(int *arr,int size);

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int input[n];
	eleccept(input,n);
	maxrray(input,n);
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
	printf("The maximum element from the given array is %d\n",max);

}
