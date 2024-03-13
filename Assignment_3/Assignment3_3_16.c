#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m = rand(), count = 10;
    char choice;

    do
    {
    	do
    	{
        	count--;
        	printf("Enter any random number between 1 to 1000: ");
        	scanf("%d", &n);

        	if (n == m)
            		printf("Congrats! You won\n");
        	else if (n < m)
            		printf("**left**\n");
        	else if (n > m)
            		printf("**right**\n");

        	if (count == 0)
        	{
            		printf("Attempts exhausted\n");
            		break;
        	}
    	}
    	while (1);
    	printf("To continue the magic game, press 'Y/y' or press 'N/n': ");
        scanf(" %*c%c", &choice);
        if(choice != 'Y' || choice !='y')
        	break;
    }
    while(1);
    return 0;
}

