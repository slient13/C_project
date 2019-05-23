#include <stdio.h>
#include <Windows.h>

struct date {
    int year;
    int month;
    int day;
};

struct account {
    struct date open;
    char name[10];
    int actnum;
    double balance;
};

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    struct account me = {{2018, 5, 31}, "박은경", 1001, 300000};

    printf("날짜 : %d/%d/%d \n", me.open.year, me.open.month, me.open.day);
    printf("예금주 : %s \n", me.name);
    printf("계좌번호 : %d \n", me.actnum);
    printf("잔고 : %.0lf \n", me.balance);

    printf("\n");

    struct account you;
    you = me;

    printf("날짜 : %d/%d/%d \n", you.open.year, you.open.month, you.open.day);
    printf("예금주 : %s \n", you.name);
    printf("계좌번호 : %d \n", you.actnum);
    printf("잔고 : %.0lf \n", you.balance);

    /*
    if (you == me) {} 불가.
    */

    system("pause");
    return 0;
}