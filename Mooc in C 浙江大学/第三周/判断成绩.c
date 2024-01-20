#include <stdio.h>

int main()
{
    int score;
    printf("请输入你的成绩\n");
    scanf("%d", &score);

    printf("你的成绩为%d\n", score);
    if (score > 60)
    {
        printf("恭喜你pass了，下学期再接再厉！");
    }
    else
    {
        printf("重修开始，加油哈哈哈！");
    }
}