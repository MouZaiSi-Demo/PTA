/*
7-3 求整数的长度 (10分)
输入1个整数， 输出该整数的长度。

输入格式:
输入一个整数。

输出格式:
输出该整数的长度。

输入样例:
在这里给出一组输入。例如：

12345
输出样例:
在这里给出相应的输出。例如：

5
*/

#include<stdio.h>

int count = 0;
int lenth(int n)
{
	
    if(n<10) return 1;//终止条件
    else 
        return lenth(n/10) + 1;//缩小规模 且该式子等价于 数学归纳法中的递推式( lenth(n)=lenth(n/10) + 1 )
    
}

int main(void)
{
int n;

    scanf("%d",&n);
    

    
    printf("%d",lenth(n));


return 0;
}
