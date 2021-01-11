/*
7 - 5 n个数的最大公约数(5分)
第一行输入一个整数n(n >= 2)，第二行输入n个整数，求这ｎ个数的最大公约数。

输入格式 :
第一行输入一个整数n，第二行输入n个整数。

输出格式 :
输出一个数。

输入样例 :
在这里给出一组输入。例如：

4
12 42 18 24
输出样例 :
	在这里给出相应的输出。例如：

	6
*/

#include<stdio.h>

int common_divisor(int M, int N);

int main(void)
{
    int a, b, c, t, n;
    int result = 0;

    scanf("%d", &n);
    scanf("%d%d", &a, &b);

    t = common_divisor(a, b);

    for (int i = 2; i < n; i++)
    {
        scanf("%d", &b);
        a = t;
        t = common_divisor(a, b);

    }

    printf("%d", t);

    return 0;
}
int common_divisor(int M, int N)
{

    int m = 0, n = 0;
    int t = 0;

    m = M;
    n = N;

    while (n != 0)
    {
        t = m % n;//若直接把n给了m会改变m%n的值 所以需要个中间变量暂时存储m%n的值
        m = n;
        n = t;
    }

    return m;
}

/*******************************************************/
//以下是更好的版本

#include<stdio.h>

int gcd(int a,int b)
{
   return b?gcd(b,a%b):a;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    
    int a,b,result;
    
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    for(int i = 2;i < n;i++)
    {
        scanf("%d",&b);
        result=gcd(result,b);
    }
    
    printf("%d",result);
    
    return 0;
}

