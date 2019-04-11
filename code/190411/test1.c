#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int arrSize = 5;

    int grade[arrSize];

    /*
    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;

    printf("grade[0] = %d \n", grade[0]);
    printf("grade[1] = %d \n", grade[1]);
    printf("grade[2] = %d \n", grade[2]);
    printf("grade[3] = %d \n", grade[3]);
    printf("grade[4] = %d \n", grade[4]);
    */

    for (int i = 0; i < arrSize; i++)
    {
        grade[i] = 10 * (i+1);
        printf("grade[%d] = %d \n", i, grade[i]);
    }

    system("pause");
    return 0;
}