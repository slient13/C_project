#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");
    srand(time(NULL));

    int correct = rand() % 100 + 1;
    int answer = -1;
    int count = 0 ;

    while(answer != correct)    {
        printf("숫자를 입력해 주십시오 : ");
        scanf("%d", &answer);
        count++;

        if (answer == correct)
            break;
        else if (answer < correct)
            printf("랜덤 수 보다 작습니다.\n");
        else if (answer > correct)
            printf("랜덤 수 보다 큽니다.\n");
    }

    printf("정답입니다. 정답을 맞출 때까지 총 %d회 시도하셨습니다.\n", count);

    system("pause");
    return 0;
}