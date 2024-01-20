#include <stdio.h>

int day(int x, int y)

{
    int i, a, b, c;

    c = 0;

    b = 0;

    for (i = 1900; i <= x; i++)

    {
        if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0)))
            c += 1;
    };

    if (y <= 2 && ((x % 400 == 0) || ((x % 100 != 0) && (x % 4 == 0))))
        c--;

    switch (y)

    {
    case 1:
        b += 0;
        break;

    case 2:
        b += 31;
        break;

    case 3:
        b += 28 + 31;
        break;

    case 4:
        b += 31 + 28 + 31;
        break;

    case 5:
        b += 30 + 31 + 28 + 31;
        break;

    case 6:
        b += 31 + 30 + 31 + 28 + 31;
        break;

    case 7:
        b += 30 + 31 + 30 + 31 + 28 + 31;
        break;

    case 8:
        b += 31 + 30 + 31 + 30 + 31 + 28 + 31;
        break;

    case 9:
        b += 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
        break;

    case 10:
        b += 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
        break;

    case 11:
        b += 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
        break;

    case 12:
        b += 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
        break;
    };

    a = ((x - 1900) * 365 + b + c + 13) % 7;

    return a;
}

int main()

{
    int x, y, a, i, n, d[12];

    n = 0;

    scanf("%d", &x);

    for (y = 1; y <= 12; y++)

    {

        a = day(x, y);

        if (a == 5)
        {
            d[n] = y;
            n++;
        };
    };

    if (n != 1)

    {
        printf("There are %d Black Fridays in year %d.\nThey are:\n", n, x);

        for (i = 0; i < n; i++)

            printf("%d/%d/13\n", x, d[i]);
    }

    else
    {
        printf("There is %d Black Friday in year %d.\nIt is:\n", n, x);

        printf("%d/%d/13\n", x, d[0]);
    }

    return 0;
}