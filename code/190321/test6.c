#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    double temp;

    printf("현재의 온도를 입력해주십시오 : ");
    scanf("%lf", &temp);

    printf("현재 온도는 %.1lf도입니다.\n", temp);
    if (temp < 32) {}
    else {
        printf("폭염 주의보를 발령합니다. \n건강에 유의하세요. \n");
    }

    system("pause");
    return 0;
}