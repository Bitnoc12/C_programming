#include <stdio.h>
int main()
{
    int i, j, n;
    char c;
    int t1, t2;
    scanf("%d %c", &n, &c);
    if (!(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'))
    {
        printf("输入错误\n");
        return 0;
    }
    if (c >= 'a') // c为小写字母
    {
        t1 = c - 'a';                                 // t1表示输出的第一个字母与a的差值
        t2 = c + 2 * (n - 1) + 2 * (n - 2) + 1 - 'a'; // t2表示输出的最后一个字母与a的差值
        c = 'a';
    }
    else // c为大写字母
    {
        t1 = c - 'A';                                 // t1表示输出的第一个字母与A的差值
        t2 = c + 2 * (n - 1) + 2 * (n - 2) + 1 - 'A'; // t2表示输出的最后一个字母与A的差值
        c = 'A';
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + i - 1; j++)
        {
            if (i + j == n + 1)
                printf("%c", c + (t1++) % 26);
            else if (j - i == n - 1)
                printf("%c", c + (t2--) % 26);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = n + 1; i <= 2 * n - 1; i++)
    {
        for (j = 1; j <= 3 * n - i - 1; j++)
        {
            if (i - j == n - 1)
                printf("%c", c + (t1++) % 26);
            else if (j + i == 3 * n - 1)
                printf("%c", c + (t2--) % 26);
            else
                printf(" ");
        }
        printf("\n");
    }
}