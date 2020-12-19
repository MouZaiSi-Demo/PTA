//������ݺ������������Ӧ���ꡢ�¡���(15��)
//Ҫ����͵��ú���month_day(year, yeardy, *pmonth, *pday)��ͨ������pmonth��pday���ؼ���ó����º��ա����磬����2000��61���ֱ𷵻�3��1����2000��ĵ�61����3��1�ա�
//
//�����ӿڶ��壺
//void month_day(year, yeardy, *pmonth, *pday)
//����year���꣬yearday��������* pmonth��* pday�Ǽ���ó����º��ա�
//
//���в��Գ���������
# include <stdio.h>
void month_day(int year, int yearday, int* pmonth, int* pday);

int main(void)
{
	int day, month, year, yearday; /*  ��������ա��¡���������ı���*/
	scanf_s("%d%d", &year, &yearday);
	month_day(year, yearday, &month, &day);/* ���ü����¡��պ���  */
	printf("%d %d %d\n", year, month, day);
	return 0;
}
//
///* ����������д�� */
//����������
//2000  61
//���������
//2000 3 1


void month_day(int year, int yearday, int* pmonth, int* pday)
{
	int k, j;
	int aa[2][100] =
	{
		{0,31,28,31,30,31,30,31,31,30,31,30,31}, /*ƽ��*/
		{0,31,29,31,30,31,30,31,31,30,31,30,31}, /*����*/
	};

	j = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);   /*�ж���ƽ�껹������*/
	for (k = 1; yearday > aa[j][k]; k++) {
		yearday -= aa[j][k];
	}
	*pmonth = k;
	*pday = yearday;
}