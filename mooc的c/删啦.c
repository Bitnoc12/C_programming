#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

char s[N] = ""; /*全局变量*/
void fun(char *p, char ch, int count)
{
    /*1.保存最后一个字符后的字符串  */
    while (*p != ch)
        p--;
    char *t = p + 1;
    /*2.最后之前的字符串  */
    *p = '\0';
    /* 重复字符个数+之后的字符串 */
    char s1[N] = "";
    sprintf(s1, "%d", count);
    strcat(s1, t);
    /* 之前的字符串+重复字符个数+之后的字符串 */
    strcat(s, s1);
}

int main()
{
    /*输入计算重复字符  */
    scanf("%s", s);
    int key[N] = {0};
    for (int j = 0; s[j]; ++j)
        key[s[j]]++;
    /* 字符串结束标记之前的位置 */
    char *p = s + strlen(s) - 1;
    /*i为字符, 修改字符串*/
    for (int i = 0; i < N; ++i)
    {
        if (key[i] > 1)
        {
            p = s + strlen(s) - 1; /* 字符串结束标记之前的位置 */
            fun(p, i, key[i]);     /*修改字符串*/
        }
    }
    printf("%s", s); /*打印修改字符串*/
    return 0;
}