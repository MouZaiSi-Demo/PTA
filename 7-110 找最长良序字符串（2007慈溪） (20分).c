/*7 - 110 ��������ַ�����2007��Ϫ��(20��)
���ǽ���ABC����ACEG�������Ƶ��ִ���Ϊ�����ִ�����Ϊ�����ǰ�ASCII�����еģ�������ACB����ACCD����AGCD���򲻿ɳ�Ϊ�����ִ��� ��д���򣬽������һ���ַ��е�������ִ��ҳ�����������䳤��

�����ʽ :
��һ���ַ������ȡ�255����

�����ʽ :
��һ�У�һ��������ִ��ĳ��ȡ�

�������� :
23451357912468abc23456
������� :
8
*/

#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[256];
    int i, j, n;
    int count = 1, max = 1, flag = 0;


    gets(a);



    for (i = 0; i < strlen(a); i++)
    {
        flag = 1;
        if (a[i] < a[i + 1])
        {
            count++;
            if (count > max)
                max = count;
        }
        else
        {
            count = 1;
        }
    }

    if (flag == 0)
        max = 0;

    printf("%d", max);

    return 0;
}

//���õ��㷨 ֱ����max��0��ʼ ����Ŀ����������ж�
/*#include<stdio.h>

int main() {

    char s[300];
    gets(s);
    int i, count = 0, max = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] < s[i + 1]) count++;
        else
        {
            count++;
            max = max > count ? max : count;
            count = 0;
        }

    }
    printf("%d", max);
}
*/