#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("## 기본 주소 | 값\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            printf("arr[%d][%d]의 주소 : %0x | 값 : %d\n", i, j, &arr[i][j], arr[i][j]);
    
    printf("## 1차원을 덜 들어간 경우.\n");
    for (int i = 0; i < 2; i++)
        printf("arr[%d]의 값 : %0x\n", i, arr[i]);      // &arr[0][0], &arr[1][0] 의 값과 같은 값을 출력. 영역의 제한이 없음. 주의 요망.
                                                        // arr[0] + i 의 경우 &arr[1][0] 이 아닌 &arr[0][1] 을 반환함.

    system("pause");
    return 0;
}