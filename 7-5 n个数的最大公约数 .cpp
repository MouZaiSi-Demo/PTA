/*
7 - 5 n���������Լ��(5��)
��һ������һ������n(n >= 2)���ڶ�������n���������������������Լ����

�����ʽ :
��һ������һ������n���ڶ�������n��������

�����ʽ :
���һ������

�������� :
���������һ�����롣���磺

4
12 42 18 24
������� :
	�����������Ӧ����������磺

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
        t = m % n;//��ֱ�Ӱ�n����m��ı�m%n��ֵ ������Ҫ���м������ʱ�洢m%n��ֵ
        m = n;
        n = t;
    }

    return m;
}

