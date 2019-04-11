#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    const int size = 6;
    double score[] = {89.3, 79.2, 84.83, 76.8, 92.52, 97.4};
    double sum = 0;

    for (int i = 0; i < size; i++) {
        printf("score[%d] : %.2lf \n", i, score[i]);
        sum += score[i];
    }
    printf("sum : %.2lf \n", sum);
    printf("average : %.2lf \n", sum / size);

    system("pause");
    return 0;
}