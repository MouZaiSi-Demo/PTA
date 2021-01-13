/*
7-1 求n的阶乘 (10分)
输入一个正整数n, 输出n!=123*...*n。

输入格式:
输入1个整数。

输出格式:
输出n!。

输入样例:
在这里给出一组输入。例如：

3
输出样例:
在这里给出相应的输出。例如：

6
*/

#include<stdio.h>
#include<string.h>

int sum = 1;
int jie(int x)
{
    
    if (x <= 2) return x;
    return  jie(x-1) * x;
}


int main(void)
{
    int x;
    scanf("%d", &x);

    printf("%d", jie(x));



    return 0;
}
