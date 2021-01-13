/*
7-2 斐波那契数列（I） (10分)
已知斐波那契数列 F
?n
?? =F
?n?1
?? +F
?n?2
?? (n>=3),F
?1
?? =1,F
?2
?? =1 用递归的方法求解该数列的第n项。

输入格式:
输入一个正整数n (1<=n<=40)。

输出格式:
输出一个数，数列的第n项

输入样例1:
1
输出样例1:
1
输入样例2:
3
输出样例2:
2
*/

 #include<stdio.h>
#include<string.h>

#define N 10000

long long f[N];
long long fibonacci(int n)
{
    if (n == 1 || n == 2)//有些题目会认为第一项是由0开始的(in Wikipedia)
        return 1;
    if (f[n] != 0)
        return f[n];
    return f[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int x;
    scanf("%d", &x);

    printf("%lld", fibonacci(x));


    return 0;
}
