/*
7-5 递归实现逆序输出整数 (15分)
本题目要求读入1个正整数n，然后编写递归函数reverse(int n)实现将该正整数逆序输出。

输入格式:
输入在一行中给出1个正整数n。

输出格式:
对每一组输入，在一行中输出n的逆序数。

输入样例:
12345
输出样例:
54321
*/

#include<stdio.h>递归实现逆序输出整数
int i = 0;

	void reverse(int n)
    {
        printf("%d",n%10);
        if(n>=10)
        {
            reverse(n/10);//每次call函数都会执行一次printf
        }
    return ;
    }


int main(void)
{
int n;

    scanf("%d",&n);
    reverse(n);
return 0;
}
