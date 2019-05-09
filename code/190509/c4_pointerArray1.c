#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int a = 1, b = 2, c = 3;
    int *ptrArr[3];

    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    printf("## 포인터 배열 기본.\n");
    for (int i = 0; i < 3; i++)
        printf("ptrArr[%d]의 값 : %0x | 참조 값 : %d\n", i, ptrArr[i], *ptrArr[i]);

    system("pause");
    return 0;
}