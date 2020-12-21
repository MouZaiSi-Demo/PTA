/*7 - 110 找最长良序字符串（2007慈溪）(20分)
我们将“ABC”或“ACEG”等类似的字串称为良序字串（因为它们是按ASCII码排列的），而像“ACB”或“ACCD”或“AGCD”则不可称为良序字串。 编写程序，将键入的一串字符中的最长良序字串找出来，并输出其长度

输入格式 :
有一串字符（长度≤255）。

输出格式 :
仅一行，一个最长良序字串的长度。

输入样例 :
23451357912468abc23456
输出样例 :
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

    if (flag == 0)//如果是空串 就没有良序字串
        max = 0;

    printf("%d", max);

    return 0;
}

//更好的算法 直接是max以0开始 用三目运算符减少判断
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
