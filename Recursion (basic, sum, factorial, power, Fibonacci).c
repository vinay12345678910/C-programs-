#include <stdio.h>

int power();
int fib();

int facto(int n)
{
    if(n == 0)
        return 1;
    
    return n * facto(n-1); //return n + sum(n-1);
}

int main()
{
    printf("sum = %d\n",facto(5));
    printf("power = %d\n", power(2,3));
    printf("fibo = %d", fib(6));
    return 0;
}

int power(int a, int b)
{
    if(b == 0)
        return 1;

    return a * power(a, b - 1);
}

int fib(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}



