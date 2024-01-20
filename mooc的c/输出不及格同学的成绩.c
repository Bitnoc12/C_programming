/*输出不及格同学的成绩*/
#include <stdio.h>
void search(float (*p)[4], int n)
{
    int i, j, flag;
    for (j = 0; j < n; j++)
    {
        flag = 0; /*设置标志，用来标识不及格的同学*/
        for (i = 0; i < 4; i++)
            if (*(*(p + j) + i) < 60) /*查找不及格的分数*/
                flag = 1;
        if (flag == 1)
        {
            printf("No.%d fails，his scores are:\n", j + 1);
            for (i = 0; i < 4; i++)
                printf("%5.1f", (*(*(p + j) + i)));
            printf("\n");
        }
    }
}
int main()
{
    float score[3][4] = {{65, 57, 70, 60}, {68, 87, 90, 81}, {50, 99, 100, 98}};
    search(score, 3); /*二维数组名做函数实参*/
    return 0;
}