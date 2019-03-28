#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int n;
    int count = 0;

    printf("숫자를 입력해 주십시오 : ");
    scanf("%d", &n);

    int temp = n;
    while(temp > 0) {
        if (temp % 3 == 0)
        {
            printf("%d\t", temp);
            count++;
        }
        temp--;
    }

    printf("\n%d 이하 3의 배수는 %d개 입니다.\n", n, count);

    system("pause");
    return 0;
}