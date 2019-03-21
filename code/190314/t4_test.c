#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    char a = 'a';
    char A = 'A';

    printf("A = %d, a = %d\n", A, a);

    system("pause");
    return 0;
}