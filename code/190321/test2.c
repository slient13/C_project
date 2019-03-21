#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int m = 10, n = 5;
    int result;

    result = m++ + --n;
    printf("m = %d, n = %d, result = %d\n", m, n, result);

    result = ++m + n--;
    printf("m = %d, n = %d, result = %d\n", m, n, result);

    system("pause");
    return 0;
}