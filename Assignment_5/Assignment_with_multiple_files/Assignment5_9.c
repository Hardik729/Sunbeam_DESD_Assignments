#include"Assignment5.h"

int binsearch(int *arr,int size,int key,int *p);

int main()
{
	int n,index,j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int input[n];
	eleccept(input,n);
	printf("Enter the key to be searched: ");
	scanf("%d",&j);
	int ans=binsearch(input,n,j,&index);
	if(ans==0)
		printf("Entered key is present at index %d\n",index);
	else
		printf("Entered key is not present\n");
	return 0;
}

int binsearch(int *arr,int size,int key,int *p)
{
	int low=0,high=size-1,mid=(low+high)/2;
	if(key<mid)
	{
		for(int i=low;i<=mid;i++)
		{
			if(key==arr[i])
			{
				*p=i;
				return 0;
			}
		}
	}
	else if(key>mid)
	{
		for(int i=mid+1;i<=high;i++)
		{
			if(key==arr[i])
			{
				*p=i;
				return 0;
			}
		}
	}
	else if(key==mid)
	{
		*p=size/2;
		return 0;
	}
	else
		return -1;
		
}
