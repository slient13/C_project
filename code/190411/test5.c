#include <stdio.h>
#include <Windows.h>

#define MIN -2100000000
#define MAX 2100000000

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int min = MAX;
    int max = MIN;

    const int size = 10;
    int data[size] = {20, 90, 30, 100, 60, 10, 40, 80, 50, 70};

    for (int i = 0; i < size; i++)
    {
        if (min > data[i])
            min = data[i];
        if (max < data[i])
            max = data[i];
    }

    printf("최소값 : %d \n", min);
    printf("최대값 : %d \n", max);

    system("pause");
    return 0;
}