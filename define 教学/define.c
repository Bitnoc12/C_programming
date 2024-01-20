#include <stdio.h>

#define Name "《鱿鱼游戏》"
#define Numbers 456
#define money "456亿"
#define champion "低清"
#define YEAR 2021
#define MONTH 10
#define DAY 4

int main()
{
    printf("%s完结于%d年%d月%d日\n", Name, YEAR, MONTH, DAY);
    printf("参与总人数为%d位 且总奖金高达%s\n", Numbers, money);
    printf("最终的胜利者为%s\n", champion);

    return 0;
}