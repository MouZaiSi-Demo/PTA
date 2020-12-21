#include <stdio.h>
#include<string.h>
int main(void)
{
	int a[100], i,j,* p, * q;

	scanf_s("%d", &n);//输入的数的个数

	for (i = 0; i < n; i++)//输入
	{
		scanf("%d", &a[i]);
	}

	p = a;//让指针指向a数组

	for (i = 0; i < n - 1; i++)//n个数 有n-1次循环
	{
		for (j = 0; j < n - 1 - i; j++)//每次循环都减少1次比较次数(因为每一次都产生了个最值)
			if (*(p + j) > * (p + j + 1))//相邻两数相比（液体分层原理）
			{
				int t;//局部变量t
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
	}
		

	for (i = 0; i < n; i++)//输出 
	{
		if (i < 2)
			printf("%d->", a[i]);
		if (i == 2)
			printf("%d", a[i]);
	}

	return 0;
}
