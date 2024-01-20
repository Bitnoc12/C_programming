#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num;
    int i, j, t = 0;
    char inf[10000];
    int m[100];
    int temp;
    int flag;
    struct o
    {
        char name[1000];
        int score;
        int no;
    } student[100];
    /*输入学生个数*/
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        student[i].no = i; //标记序号
        t = 0;
        flag = 0;
        scanf("%s", inf);
        /*输入姓名*/
        for (j = 0; inf[j] != ','; j++)
        {
            student[i].name[j] = inf[j];
        }
        student[i].name[j] = '\0'; //添加姓名尾标
        /*输入成绩*/
        for (j++; inf[j] != '\0'; j++)
        {
            m[t] = inf[j] - '0';
            t++;
        }
        student[i].score = 0;
        for (j = 0; j < t; j++)
            student[i].score = m[j] * pow(10, t - j - 1) + student[i].score; //计算成绩
    }
    /*降序排序*/
    for (i = 0; i < num; i++)
        for (j = i + 1; j < num; j++)
            if (student[i].score < student[j].score && student[i].no < student[j].no)
            {
                temp = student[i].no;
                student[i].no = student[j].no;
                student[j].no = temp;
            }
    /*分数相同根据姓名排序*/
    /*因为玄学把单独拿出来，否则测试用例1错误*/
    for (i = 0; i < num; i++)
        for (j = i + 1; j < num; j++)
            if (student[i].score == student[j].score)
            {
                for (t = 0; student[j].name[t] != '\0' && student[i].name[t] != '0'; t++)
                    if (student[j].name[t] > student[i].name[t] && student[j].no < student[i].no)
                    {
                        temp = student[i].no;
                        student[i].no = student[j].no;
                        student[j].no = temp;
                    }
            }
    /*输出*/
    for (i = 0; i < num; i++)
        for (j = 0; j < num; j++)
            if (student[j].no == i)
            {
                for (t = 0; student[j].name[t] != '\0'; t++)
                    printf("%c", student[j].name[t]);
                printf(",");
                printf("%d\n", student[j].score);
            }
}