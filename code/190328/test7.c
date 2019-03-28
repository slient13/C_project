#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int num1, num2;
    printf("숫자 두개를 입력해 주십시오 : ");
    scanf("%d, %d", &num1, &num2);

    int temp = 1 ;
    for (int i = 1; 1; i++)
    {
        // 최대 공약수
        if ((num1 % i == 0) && (num2 % i == 0))
            temp = i;
        
        if (i == num1)
            break;
        else if (i == num2)
            break;
    }
    printf("최대 공약수는 %d 입니다.\n", temp);

    // 최소 공배수
    int higher, lower;
    if (num1 > num2)    {
        higher = num1;
        lower = num2;
    }
    else    {
        higher = num2;
        lower = num1;
    }
    int result;
    for (int i = higher; 1; i += higher)
    {
        if (i % lower == 0)    {
            result = i;
            break;
        }
    }
    printf("최소 공배수는 %d 입니다.\n", result);

    system("pause");
    return 0;
}