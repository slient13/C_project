#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int n;

    printf("숫자를 입력해 주십시오 : ");
    scanf("%d", &n);

    int total = 0;
    for (int temp = 2; temp <= n; temp++)
    {
        int count = 0;
        for (int i = 2; i <= temp / 2; i++)
        {
            if (temp % i == 0)
                count++;
        }
        if (count == 0){
            printf("%d\t", temp);
            total++;
        }
    }
    printf("\n 소수의 총 갯수 : %d\n", total);

    system("pause");
    return 0;
}