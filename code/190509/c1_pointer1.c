#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int a = 10;
    int b = 100;
    int *p = &a;

    printf("a 변수 안에 있는 값은 %d\n", a);
    printf("b 변수 안에 있는 값은 %d\n", b);

    printf("a 변수의 주소값은 %0x\n", &a);
    printf("b 변수의 주소값은 %0x\n", &b);

    printf("p 의 참조값은 %d\n", *p);
    printf("p 의 값은 %0x\n", p);
    printf("p 의 주소는 %0x\n", &p);

    *p += 35;

    printf("변경된 p의 참조값, 즉 a의 값은 %d\n", *p);
    printf("+1 을 수행한 p 의 값은 %0x\n", (p + 1));


    system("pause");
    return 0;
}