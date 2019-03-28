#include <stdio.h>
#include <Windows.h>

#define BASE_MONEY 1000000

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int base = BASE_MONEY;
    int after = base;
    int year = 0;

    /*
    while (after < BASE_MONEY * 10)
    {
        after *= 1.3;
        year++;
    }
    */

    while(1)
    {
        if (after > BASE_MONEY * 10)
            break;
        else {
            after *= 1.3;
            year++;
        }
    }

    printf("원금이 10배이상 뛰는데 걸리는 기간 : %d년\n", year);
    printf("%d년 뒤 금액의 총량 : %d원\n", year, after);


    system("pause");
    return 0;
}