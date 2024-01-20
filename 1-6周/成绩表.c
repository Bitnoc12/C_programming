#include <stdio.h>
#define N 2
int main()
{
    int a[N][4], i, j, s = 0;
    char c;
    for (i = 0; i < N; i++) /* 输入30人的成绩 */
    {
        for (j = 0; j <= 3; j++) /* 输入学号和3门成绩 */
            scanf("%d", &a[i][j]);
    }
    printf("  NO.   MT   EN   PH   SUM   V   >90\n");
    printf("-------------------------------------\n");
    for (i = 0; i < N; i++) /* 依次对30个人进行处理 */
    {
        printf("%4d:", a[i][0]);
        for (s = 0, j = 1; j <= 3; j++)
        {
            s += a[i][j]; /* 计算3门课程总分 */
            printf("%4d", a[i][j]);
        }
        if (a[i][1] >= 90 && a[i][2] >= 90 && a[i][3] >= 90)
            c = 'Y'; /* 若三门成绩均为90以上 */
        else
            c = 'N';
        printf("  %d   %d   %c\n", s, s / 3, c);
    }
}