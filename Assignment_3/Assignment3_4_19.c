#include<stdio.h>

int main()
{
    int n, m;
    printf("Provide a range (2 integers) to print tables within that range: ");
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = n; j <= m; j++)
        {
            printf("%-4d", i * j);
        }
        printf("\n");
    }

    return 0;
}

