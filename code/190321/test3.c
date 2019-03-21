#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int a = 10, b = 5, m = 1;
    int result;

    result = (a < b) && (m++ == 1);     // 컴파일러의 최적화 방식 때문에 뒤쪽 (m++ == 1)은 실행되지 않고 지나감.
                                        // 이를 단축평가라고 함.
    printf("m = %d result = %d \n", m, result);

    result = (a > b) || (--m == 1);
    printf("m = %d result = %d \n", m, result);

    system("pause");
    return 0;
}