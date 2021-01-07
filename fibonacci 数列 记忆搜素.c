#include<stdio.h>
#include<string.h>


long f[10000];
long fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    if (f[n] != 0)
        return f[n];
    return f[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int x;
    scanf("%d", &x);

    printf("%ld", fibonacci(x));


    return 0;
}