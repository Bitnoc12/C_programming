//如果可以我想和你回到那天相遇K
//如果可以我想和你回到那天相遇K
//如果可以我想和你回到那天相遇K
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char card_name[3];
    puts("shurupaiming:");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'k')
    {
        val = 10;
    }
    if (card_name[0] == 'Q')
    {
        val = 10;
    }
    if (card_name[0] == 'J')
    {
        val = 10;
    }
    if (card_name[0] == 'A')
    {
        val = 11;
    }
    else
    {
        val = atoi(card_name);
    }
    printf("%d", val);
    return 0;
}