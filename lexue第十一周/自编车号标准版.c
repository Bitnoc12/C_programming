#include <stdio.h>
int main()
{
    int i = 0, count = 0;
    char str[6];
    gets(str);
    if (str[4] > '9' || str[4] < '0')
    {
        printf("no.\n");
        return 0;
    }
    for (i = 0; i < 5; i++)
    {
        if (str[i] == 'O' || str[i] == 'I')
        {
            printf("no.\n");
            return 0;
        }
        if (str[i] <= 'Z' && str[i] >= 'A')
            count++;
    }
    if (count > 1)
        printf("ok.\n");
    else
        printf("no.\n");
    return 0;
}