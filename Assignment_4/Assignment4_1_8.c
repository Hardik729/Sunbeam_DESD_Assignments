#include<stdio.h>

int nextfib();

int main() {
    printf("%d\n", nextfib());
    printf("%d\n", nextfib());
    printf("%d\n", nextfib());
    printf("%d\n", nextfib());
    return 0;
}

int nextfib() {
    static int n1=0,n2=1,fib=0;
    fib=n1+n2;
    n1=n2;
    n2=fib;
    return fib;
}
