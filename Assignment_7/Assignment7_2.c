#include"array2D.h"

void eleadd(int *arr1,int *arr2,int row1,int col1,int row2,int col2);
void elesub(int *arr1,int *arr2,int row1,int col1,int row2,int col2);
void elemul(int *arr1,int *arr2,int row1,int col1,int row2,int col2);

int main()
{
	int n,m,r,s;
	printf("Enter the no. of rows and columns for matrix1: ");
	scanf("%d%d",&n,&m);
	int *p=eleccept(n,m);
	printf("Entered elements of the array are:\n");
	eleprint(p,n,m);
	printf("Enter the no. of rows and columns for matrix2: ");
	scanf("%d%d",&r,&s);
	int *z=eleccept(r,s);
	printf("Entered elements of the array are:\n");
	eleprint(z,r,s);
	eleadd(p,z,n,m,r,s);
	elesub(p,z,n,m,r,s);
	elemul(p,z,n,m,r,s);
	free(p);
	free(z);
	return 0;
}

void eleadd(int *arr1,int *arr2,int row1,int col1,int row2,int col2)
{
	if(col1!=row2)
	{
		printf("Addition cannnot be performed\n");
		exit(1);
	}
	int *temp1=arr1,*temp2=arr2;
	printf("Addition of 2 matrices:\n");
	for(int i=0,k=0;i<row1,k<row2;i++,k++)
	{
		for(int j=0,l=0;j<col1,l<col2;j++,l++)
		{
			printf("%d ",(*temp1+*temp2));
			temp1++;
			temp2++;
		}
		printf("\n");
	}
}

void elesub(int *arr1,int *arr2,int row1,int col1,int row2,int col2)
{
	if(col1!=row2)
	{
		printf("Subtraction of 2 matrices cannot be performed\n");
		exit(1);
	}
	int *temp1=arr1,*temp2=arr2;
	printf("Subtraction of 2 matrices:\n");
	for(int i=0,k=0;i<row1,k<row2;i++,k++)
	{
		for(int j=0,l=0;j<col1,l<col2;j++,l++)
		{
			printf("%d ",(*temp1-*temp2));
			temp1++;
			temp2++;
		}
		printf("\n");
	}
}

void elemul(int *arr1,int *arr2,int row1,int col1,int row2,int col2)
{
	if(col1!=row2)
	{
		printf("Multiplication cannot be peformed\n");
		exit(1);
	}
	int *temp1=arr1,*temp2=arr2;
	printf("Multiplication of 2 matrices:\n");
	for(int i=0,k=0;i<row1,k<row2;i++,k++)
	{
		for(int j=0,l=0;j<col1,l<col2;j++,l++)
		{
			printf("%d ",(*temp1 * *temp2));
			temp1++;
			temp2++;
		}
		printf("\n");
	}
}
