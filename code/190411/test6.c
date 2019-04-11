#include <stdio.h>
#include <Windows.h>

#define MIN -2100000000
#define MAX 2100000000
#define END -2100000001

void sort_merge (int data[], const int size);
void swap (int *a, int *b);
void min_mid_max (int data[], const int size);

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int min = MAX;
    int max = MIN;

    const int size = 10;
    int data[size] = {20, 90, 30, 100, 60, 10, 40, 80, 50, 70};

    // 정렬 함수
    sort_merge(data, size);

    for (int i = 10; i < 10; i++)
        printf("%d ", data[i]);

    // 최소, 중앙, 최대값 출력

    system("pause");
    return 0;
}

void sort_merge (int data[], const int size)
{
    // 병합 정렬
    int temp[2][size];
    int index = 0;
    int col = 0;
    int search_size = 1;
    int r = 0;
    
    while (1) {

    }
}

void swap (int *a, int *b)
{
    // 스왑
}

void min_mid_max (int data[], const int size)
{

}