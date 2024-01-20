#include <stdio.h>
int main()
{
    int a[9], fst, snd, trd, flag, t, judge, s = 0;
    scanf("%d", &a[0]);
    for (a[1] = 1; a[1] < 10; a[1]++) //由1开始吧。。是1-9。。
    {
        for (a[2] = 1; a[2] < 10; a[2]++)
        {
            judge = 1;
            fst = a[0] * 100 + a[1] * 10 + a[2];
            snd = fst * 2;
            trd = fst * 3;
            if (trd < 1000)
            {
                //要把snd和trd放进a数组。。
                t = snd;
                a[5] = t % 10;
                t /= 10;
                a[4] = t % 10;
                a[3] = t / 10;
                t = trd;
                a[8] = t % 10;
                t /= 10;
                a[7] = t % 10;
                a[6] = t / 10;
                for (flag = 0; flag < 9 && judge == 1; flag++)
                    for (t = flag + 1; t < 9 && judge == 1; t++)
                        if (a[flag] == a[t])
                            judge = 0;
                //还要判断是否有0。。。因为是1-9。。
                for (t = 0; t < 9; ++t)
                {
                    if (a[t] == 0)
                        judge = 0;
                }
            }
            else
                judge = 0;
            if (judge == 1)
            {
                s = 1;
                printf("%d,%d,%d\n", fst, snd, trd);
            }
        }
    }
    if (s == 0)
        printf("0,0,0\n");
}