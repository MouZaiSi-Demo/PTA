#include <stdio.h>
#include<string.h>
int main(void)
{
	int a[100], i,j,* p, * q;

	scanf_s("%d", &n);//��������ĸ���

	for (i = 0; i < n; i++)//����
	{
		scanf("%d", &a[i]);
	}

	p = a;//��ָ��ָ��a����

	for (i = 0; i < n - 1; i++)//n���� ��n-1��ѭ��
	{
		for (j = 0; j < 3 - 1 - i; j++)//ÿ��ѭ��������1�αȽϴ���
			if (*(p + j) > * (p + j + 1))//����������ȣ�Һ��ֲ�ԭ��
			{
				int t;//�ֲ�����t
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
	}
		

	for (i = 0; i < n; i++)//��� 
	{
		if (i < 2)
			printf("%d->", a[i]);
		if (i == 2)
			printf("%d", a[i]);
	}

	return 0;
}