/*用字符数组实现字符串复制*/
#include <stdio.h>
int main()
{
    char a[] = "I am a boy.", b[20];
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
        *(b + i) = *(a + i);
    *(b + i) = '\0';
    printf(" string a is：%s\n", a);
    printf(" string b is：");
    for (i = 0; *(b + i) != '\0'; i++)
        printf("%c", b[i]);
    return 0;
}