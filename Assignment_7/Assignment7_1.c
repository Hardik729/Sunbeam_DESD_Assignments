#include"array2D.h"

int main()
{
	int n,m;
	printf("Enter the no. of rows and columns: ");
	scanf("%d%d",&n,&m);
	int *p = eleccept(n,m);
	eleprint(p,n,m);
	free(p);
	return 0;
}
