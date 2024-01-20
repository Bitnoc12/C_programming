#include <stdio.h>

int main()
{
    //初始化
    int price = 0;
    int bill = 0;

    //读取金额和票面
    printf("请输入金额：\n");
    scanf("%d", &price);
    printf("请输入票面：\n");
    scanf("%d", &bill);

    //计算找零
    if (bill >= price)
    {
        printf("找您%d元，谢谢", bill - price);
    }
    else
    {
        printf("您的金额不足");
    }

    return 0;
}