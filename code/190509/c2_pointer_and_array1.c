#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int arr[5] = {1, 2, 3, 4, 5};

    printf("# arr의 주소 %0x\n", arr);
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]의 주소 %0x\n", i, &arr[i]);
    }

    printf("# 간접 참조형 방식\n");
    for (int i = 0; i < 5; i++)
        printf("*(arr + %d)의 값 : %d\n", i, *(arr + i));

    int *p = arr;
    printf("# 포인터 간접 참조형 방식\n");
    for (int i = 0; i < 5; i++)
        printf("*(p + %d)의 값 : %d\n", i, *(p + i));

    printf("# 포인터 직접 참조형 방식\n");
    for (int i = 0; i < 5; i++)
        printf("p[%d]의 값 : %d\n", i, p[i]);

    system("pause");
    return 0;
}