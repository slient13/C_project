#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int a = 0, b = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0)
            a += i;
        else
            b += i;
    }

    printf("홀수의 합 : %d\n", a);
    printf("짝수의 합 : %d\n", b);

    system("pause");
    return 0;
}