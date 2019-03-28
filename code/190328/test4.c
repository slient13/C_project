#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int input;

    printf("숫자 하나를 입려해 주십시오 : ");
    scanf("%d", &input);

    if (input > 0){
        int count = 0;
        int temp = input / 2;
        while(temp > 0){
            if (input % temp == 0)
                count++;
            temp--;
        }

        if (count == 1)
            printf("해당 숫자는 소수입니다.\n");
        else if(count == 0)
            printf("해당 숫자는 1입니다.\n");
        else
            printf("해당 숫자는 소수가 아닙니다.\n");
    }
    else
        printf("음수나 0을 입력하셨습니다.\n");


    system("pause");
    return 0;
}