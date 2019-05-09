#include <stdio.h>
#include <Windows.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int a = 10, b = 20;

    printf("## 기본 값\n");
    printf("a : %d, b : %d\n", a, b);

    printf("swap 함수 사용, 주소로 전달\n");
    swap(&a, &b);
    printf("a : %d, b : %d\n", a, b);

    printf("swap 함수 사용, 포인터로 전달\n");
    int *pa, *pb;
    pa = &a;
    pb = &b;
    swap(pa, pb);
    printf("a : %d, b : %d\n", a, b);

    system("pause");
    return 0;
}