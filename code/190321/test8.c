#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int score[2];
    int type = 0;

    printf("전공 시험 점수를 입력해 주십시오 : ");
    scanf("%d", &score[0]);

    printf("영어 시험 점수를 입력해 주십시오 : ");
    scanf("%d", &score[1]);

    if (score[0] >= 90)
        type++;
    if (score[1] >= 90)
        type++;

    if (type == 0)
        printf("불합격 입니다.\n");
    else if (type == 1)
        printf("대기\n");
    else if (type == 2)
        printf("합격입니다.\n");

    system("pause");
    return 0;
}