#include<stdio.h>

void eleccept(int *arr,int size);
void eleprint(int *arr,int size);

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int input[n];
	eleccept(input,n);
	eleprint(input,n);
	return 0;
}

void eleccept(int *arr,int size)
{
	printf("Enter the array elements:\n");
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}

void eleprint(int *arr,int size)
{
	printf("Array elements:\n");
	for(int i=0;i<size;i++)
		printf("%-2d",arr[i]);
}
