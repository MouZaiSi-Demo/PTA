//输入年份和天数，输出对应的年、月、日(15分)
//要求定义和调用函数month_day(year, yeardy, *pmonth, *pday)，通过参数pmonth和pday返回计算得出的月和日。例如，输入2000和61，分别返回3和1，即2000年的第61天是3月1日。
//
//函数接口定义：
//void month_day(year, yeardy, *pmonth, *pday)
//其中year是年，yearday是天数，* pmonth和* pday是计算得出的月和日。
//
//裁判测试程序样例：
# include <stdio.h>
void month_day(int year, int yearday, int* pmonth, int* pday);

int main(void)
{
	int day, month, year, yearday; /*  定义代表日、月、年和天数的变量*/
	scanf_s("%d%d", &year, &yearday);
	month_day(year, yearday, &month, &day);/* 调用计算月、日函数  */
	printf("%d %d %d\n", year, month, day);
	return 0;
}
//
///* 请在这里填写答案 */
//输入样例：
//2000  61
//输出样例：
//2000 3 1


void month_day(int year, int yearday, int* pmonth, int* pday)
{
	int k, j;
	int aa[2][100] =
	{
		{0,31,28,31,30,31,30,31,31,30,31,30,31}, /*平年*/
		{0,31,29,31,30,31,30,31,31,30,31,30,31}, /*闰年*/
	};

	j = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);   /*判断是平年还是闰年*/
	for (k = 1; yearday > aa[j][k]; k++) {
		yearday -= aa[j][k];
	}
	*pmonth = k;
	*pday = yearday;
}