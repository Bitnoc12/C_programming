#include <stdio.h>
void move(char getone, char putone)
{
    printf("%c --> %c\n", getone, putone);
}
void hannoi(int n, char one, char two, char three)
{
    if (n == 1)
        move(one, three);
    else
    {
        hannoi(n - 1, one, three, two);
        move(one, three);
        hannoi(n - 1, two, one, three);
    }
}
int main()
{
    int m;
    printf("Input the number of disks:");
    scanf("%d", &m);
    printf("The steps to moving %3d disks:\n", m);
    hannoi(m, 'A', 'B', 'C');
    return 0;
}