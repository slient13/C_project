#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int score[4] = {0, };
    int total;
    double avg;
    char degree;

    printf("국어 성적을 입력해 주십시오 : ");
    scanf("%d", &score[0]);

    printf("수학 성적을 입력해 주십시오 : ");
    scanf("%d", &score[1]);
    
    printf("영어 성적을 입력해 주십시오 : ");
    scanf("%d", &score[2]);
    
    printf("과학 성적을 입력해 주십시오 : ");
    scanf("%d", &score[3]);

    total = score[0] + score[1] + score[2] + score[3];
    avg = total / 4.0;

    printf("당신의 총점은 %d점 입니다.\n", total);
    printf("당신의 평균은 %.2lf점 입니다.\n", avg);

    if (avg < 60)
        degree = 'F';
    else if (avg < 70)
        degree = 'D';
    else if (avg < 80)
        degree = 'C';
    else if (avg < 90)
        degree = 'B';
    else
        degree = 'A';

    printf("당신의 성적은 %c 입니다.\n", degree);

    system("pause");
    return 0;
}