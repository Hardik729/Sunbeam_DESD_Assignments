#include<stdio.h>
#include<math.h>

int isPrime(int n);
void Prange(int p,int q);

int main()
{
    int number=5;
    if(isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    
    Prange(1,100);
    
    return 0;
}

int isPrime(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void Prange(int p,int q)
{
    for(int k=p;k<=q;++k)
    {
        if(isPrime(k))
            printf("%d ",k);
    }
    printf("\n");
}

