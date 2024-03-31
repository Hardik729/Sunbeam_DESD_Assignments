#include"array2D.h"

void rowsum(int *arr,int row,int col);
void colsum(int *arr,int row,int col);

int main()
{
	int n,m;
	printf("Enter the no. of rows and columns: ");
	scanf("%d%d",&n,&m);
	int *p=eleccept(n,m);
	printf("Entered array elements:\n");
	eleprint(p,n,m);
	rowsum(p,n,m);
	colsum(p,n,m);
	return 0;
}

void rowsum(int *arr,int row,int col)
{
    int total=0,line;
    printf("Row no. of the matrix to get the total: ");
    scanf("%d",&line);
    for(int i=0;i<col;i++)
		total+=*(arr+line+i);
	printf("Total for the given row %d is %d\n",line,total);
}

void colsum(int *arr,int row,int col)
{
	int total=0,line;
	printf("Column no. of the matrix to get the total: ");
	scanf("%d",&line);
	for(int i=0;i<row;i++)
		total+=*(arr+i*col+line);
	printf("Total for the given column %d is %d\n",line,total);
}
