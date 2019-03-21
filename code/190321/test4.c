// 섭씨 -> 화씨 변환 프로그램
////////////////////////////////////////////////

#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    double temp_C, temp_F;

    printf("현재 섭씨 온도를 입력해 주십시오 : ");
    scanf("%lf", &temp_C);

    temp_F = temp_C / 5 * 9 + 32;

    printf("현재의 화씨 온도는 %0.2lf도 입니다.\n", temp_F);

    system("pause");
    return 0;
}