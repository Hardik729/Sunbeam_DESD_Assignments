#include"Assignment5.h"

int linsearch(int *arr,int size,int key,int *p);

int main()
{
	int n,j,index;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int input[n];
	eleccept(input,n);
	printf("Entered the key to be searched: ");
	scanf("%d",&j);
	int ans=linsearch(input,n,j,&index);
	if(ans==0)
		printf("Entered key is present at index location %d\n",index);
	else
		printf("Entered key is not present\n");
	return 0;
}

int linsearch(int *arr,int size,int key,int *p)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			*p=i;
			return 0;
		}
	}
	return -1;
}
