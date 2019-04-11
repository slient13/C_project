#include <stdio.h>
#include <Windows.h>

#define CONT 0  // 계속
#define STOP 1  // 중단


int makeSeat(int seat[], int size, int *total);

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    const int size = 10;

    int seat[size] = {0, };
    int total_reservation = 0;
    int checker = 0;

    while (1){
        checker = makeSeat(seat, size, &total_reservation);
        if (checker == 1)
            break;
    }

    printf("이용해 주셔서 감사합니다.\n");


    system("pause");
    return 0;
}

int makeSeat(int seat[], int size, int *total)
{
    // 좌석 예매 질문 : Y >> Ct, N >> 1
    while (1){
        char checker;
        printf("좌석을 예매하시겠습니까?(Y/N) : ");
        scanf("%c", &checker);
        fflush(stdin);

        if (checker == 'Y' || checker == 'y')
            break;
        else if (checker == 'N' || checker == 'n')
            return STOP;
        else
            printf("입력이 잘못되었습니다. 다시 입력해 주십시오. \n");
    }

    // 좌석 현황
    printf("==============================\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", i+1);
    printf("\n==============================\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", seat[i]);
    printf("\n");

    // 좌석 예매 : total < 10 >> Ct, total == 10 >> 1
    if (*total < 10) {
        printf("현재 남은 자리는 %d 자리 입니다.\n", size - *total);
        while(1){
            printf("예매할 좌석을 입력해 주십시오(1 - 10) : ");
            int t;
            scanf("%d", &t);
            fflush(stdin);
            if (t > 0 && t <= 10) {
                seat[t-1] = 1;
                (*total)++;
                printf("%d번 자리 예약이 완료되었습니다.\n", t);
                break;
            }
            else {
                printf("입력이 잘못되었습니다. 다시 입력해 주십시오.\n");
            }
        }
    }
    else if (*total == 10) {
        printf("죄송합니다. 모든 좌석이 예매되었습니다.\n");
        return STOP;
    }

    return CONT;
}