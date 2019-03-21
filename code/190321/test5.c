// 잔돈 계산 프로그램.
// 잔액은 동전으로 반환
// 동전의 갯수는 항시 최소한으로
////////////////////////////////////////////////

#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int coin_type[4] = {500, 100, 50, 10};
    int money;
    int temp;

    printf("잔액을 입력해 주십시오 : ");
    scanf("%d", &money);

    printf("500원 갯수 : %d\n", temp = money / coin_type[0]);
    money -= temp * coin_type[0];

    printf("100원 갯수 : %d\n", temp = money / coin_type[1]);
    money -= temp * coin_type[1];

    printf("50원 갯수 : %d\n", temp = money / coin_type[2]);
    money -= temp * coin_type[2];

    printf("10원 갯수 : %d\n", temp = money / coin_type[3]);
    money -= temp * coin_type[3];


    system("pause");
    return 0;
}