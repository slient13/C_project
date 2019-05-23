#include <stdio.h>
#include <Windows.h>
#include <string.h>

struct account {
    char name[10];
    int actnum;
    double balance;
};

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    struct account myAccount = {"홍길동", 1001, 300000};

    printf("이름 : %s \n", myAccount.name);
    printf("계좌번호 : %d \n", myAccount.actnum);
    printf("금액 : %.0lf \n\n", myAccount.balance);

    struct account yourAccount;
    strcpy(yourAccount.name, "박은경");
    yourAccount.actnum = 2002;
    yourAccount.balance = 500000; 

    printf("이름 : %s \n", yourAccount.name);
    printf("계좌번호 : %d \n", yourAccount.actnum);
    printf("금액 : %.0lf \n\n", yourAccount.balance);

    struct account someoneAccount;

    printf("이름을 적어주십시오 : ");
    scanf("%s", someoneAccount.name);   // 한글 입력 제대로 안됨.
    fflush(stdin);
    printf("계좌를 적어주십시오 : ");
    scanf("%d", &(someoneAccount.actnum));
    fflush(stdin);
    printf("금액을 적어주십시오 : ");
    scanf("%lf", &(someoneAccount.balance));
    fflush(stdin);

    printf("이름 : %s \n", someoneAccount.name);
    printf("계좌번호 : %d \n", someoneAccount.actnum);
    printf("금액 : %.0lf \n\n", someoneAccount.balance);

    system("pause");
    return 0;
}