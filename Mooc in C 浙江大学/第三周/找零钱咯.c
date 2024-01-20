#include <stdio.h>

int main()
{
    //初始化
    int price, money;

    //得到金额
    printf("请输入您的购买金额：\n");
    scanf("%d", &price);
    printf("您购买的金额为%d元,请使用现金支付\n", price);

    //得到钱
    printf("请输入您的钱：\n");
    scanf("%d", &money);
    printf("你所使用的钱为%d元\n", money);

    //找零钱机制
    int lingqian = money - price;

    if (money < price)
    {
        printf("干你那巴拉，想吃软饭是吗,物品收回\n");
        printf("非常感谢你的光临，有缘再次光临！\n");
        return 0;
    }
    while (money = price)
    {
        printf("完美啊，顾客你真棒\n");
        printf("非常感谢你的光临，有缘再次光临！\n");
        return 0;
    }
    while (money > price)
    {
        printf("找您%d元\n", lingqian);
        printf("非常感谢你的光临，有缘再次光临！\n");
        return 0;
    }
}