#include <stdio.h>
int countsub(char *str, char *ss);
int main()
{
    char s1[1000] = {0}, s2[100] = {0};
    gets(s1);
    gets(s2);
    printf("%d\n", countsub(s1, s2));
}
int countsub(char *str, char *ss)
{
    int count = 0, i = 0;
    // count用来计算子字符串的个数，i用来计算连续的子字符串个数
    char *p = str, *q = ss;
    while (*p != '\0')
    {
        q = ss;       //每次都要初始化q指针，让它指向ss的第一个元素
        if (*p == *q) //判断p，q指针指向的元素是否相等
        {
            while (*p++ == *q++) //判断相等并且p，q向后移一位
            {
                if (*q == '\0') //当q指向最后'\0'时，就初始化q
                {
                    q = ss;
                    count++;
                    //并且说明原字符串含有一个子字符串 count+1
                }
            }
            if (i <= count)
            //这里是判断所求子字符串个数是否为最多的一个
            {
                i = count;
                count = 0;
            }
        }
        else //如果p，q指向的元素不同，p向后移一位
            p++;
    }

    return i; //返回i 的值
}