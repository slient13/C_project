#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int x = 10;
    int y = 010;
    int z = 0x10;

    printf("x = %d \n", x);     // 10 진수
    printf("y = %o \n", y);     // 8 진수
    printf("z = %x \n", z);     // 16 진수


    system("pause");
    return 0;
}