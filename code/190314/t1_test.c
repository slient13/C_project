#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");
    system("cls");
    
    int a = 30, b = 43;
    int sum;
    sum = a + b;

    double x = 38.342, y = 45.345;
    double sub;
    sub = x - y;

    printf("합 : %d\n", sum);
    printf("차 : %.3lf\n", sub);

    
    system("pause");
    return 0;
}