#include<stdio.h>

void compute(int *ptr,int length,int *sum,int *avg);

int main()
{
	int total, average,length;
	int arr[5] = {45,67,98,76,88};
	length=sizeof(arr)/sizeof(arr[0]);
	compute(arr,length,&total,&average);
	printf("Total and average of 5 subjects are %d and %d respectively.\n",total,average);
	return 0;
}

void compute(int *ptr,int length,int *sum,int *avg)
{
	int tot=0;
	for(int i=0;i<length;i++)
		tot+=ptr[i];
	*sum=tot;
	*avg=tot/length;
}
