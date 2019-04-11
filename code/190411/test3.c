#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    printf("%d byte. \n", sizeof(int));
    printf("%d byte. \n", sizeof(double));

    int a;
    float b;

    printf("%d byte. \n", sizeof(a));
    printf("%d byte. \n", sizeof(b));

    int grade[5] = {0, };

    printf("%d byte. \n", sizeof(grade));
    printf("%d byte. \n", sizeof(grade) / sizeof(int));

    system("pause");
    return 0;
}