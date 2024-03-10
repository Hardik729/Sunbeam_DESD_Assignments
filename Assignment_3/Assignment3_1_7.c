#include<stdio.h>

int main()
{
    int n, i = 1, j;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
            j=n/i;
            if (i<=j)
            {
                printf("%d * %d = %d\n",i,j,n);
            }
        }
        i++;
    }
    return 0;
}

