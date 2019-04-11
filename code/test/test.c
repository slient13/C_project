#include <stdio.h>
#include <Windows.h>

int main()
{
    system("chcp 65001");   // cmd 인코딩을 유니코드로 변경
    system("cls");          // 화면 초기화

    printf("hello world\n");
    printf("한글 테스트\n");

    system("pause");
    return 0;
}

// 실험 결과 : 이상 없음