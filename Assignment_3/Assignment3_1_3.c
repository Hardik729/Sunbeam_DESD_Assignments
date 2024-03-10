#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=0,i=0,count=0,rem;
    int power=1,j=1,rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp=n,temp1=n,temp2=n;
	int k=0,temp3=n,temp4=n,sum1=0,rem1;
    while(n!=0)
	{
        n=n/10;
        count++;
    }
    printf("Total no. of digits is %d\n",count);
    while(i<count)
	{
        rem=temp%10;
        temp=temp/10;
        sum+=rem;
        i++;
    }
    printf("Sum=%d\n",sum);
    while(j<=count)
	{
        int digit=temp1%10;
        rev=rev*10+digit;
        temp1=temp1/10;
        j++;
    }
    printf("Reversed no. is %d\n",rev);
	if(temp2==rev)
		printf("Given number %d is palindrome.\n",temp2);
	else
		printf("Given number %d is not a palindrome.\n",temp2);
    while(k<count)
	{
		rem1=temp3%10;
		temp3=temp3/10;
		sum1=sum1+pow(rem1,count);
		k++;
	}
	printf("Armstrong no. of %d is %d\n",temp4,sum1);
	return 0;
}

