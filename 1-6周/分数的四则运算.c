#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, z, m, i;
    char f;
    scanf("%d/%d %c %d/%d", &a, &b, &f, &c, &d);
    if (b == 0 || d == 0 || (f != '+' && f != '-' && f != '*' && f != '/'))
    {
        exit(0);
    }
    switch (f)
    {
    case '+':
        z = a * d + b * c;
        m = b * d;

        break;
    case '-':
        z = a * d - b * c;
        m = b * d;

        break;
    case '*':
        z = a * c;
        m = b * d;

        break;
    case '/':
        z = a * d;
        m = b * c;

        break;
    }

    if (z == 0)
    {
        printf("%d/%d %c %d/%d = %d\n", a, b, f, c, d, z);
    }
    else if (m == 0)
    {
        printf("%d/%d %c %d/%d = %d\n", a, b, f, c, d, m);
    }
    else if ((m * 1.0 / z) == 1)
    {
        printf("%d/%d %c %d/%d = %d\n", a, b, f, c, d, 1);
    }
    else if (m > z)
    {
        i = m;
        while (i > 1)
        {
            if ((z % i == 0) && (m % i == 0))
            {
                z /= i;
                m /= i;
            }
            i--;
        }
        printf("%d/%d %c %d/%d = %d/%d\n", a, b, f, c, d, z, m);
    }
    else if (z > m)
    {
        i = z;
        while (i > 1)
        {
            if ((z % i == 0) && (m % i == 0))
            {
                z /= i;
                m /= i;
            }
            i--;
        }
        if (m == 1)
        {
            printf("%d/%d %c %d/%d = %d\n", a, b, f, c, d, z);
        }
        else
        {
            printf("%d/%d %c %d/%d = %d/%d\n", a, b, f, c, d, z, m);
        }
    }

    return 0;
}