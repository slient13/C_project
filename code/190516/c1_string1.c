/*
개요 : 문자열 처리
*/

#include <stdio.h>
#include <Windows.h>
#include <conio.h>      // getche() 포함.
#include <ctype.h>      // 각종 문자 처리 함수 포함.
#include <string.h>     // 각종 문자열 처리 함수 포함.

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    printf("////////////////////////////////////////////////\n");   
    // 문자열 출력

    char ch = 'A';
    printf("%c %d \n", ch, ch);

    char java[] = {'J', 'A', 'V', 'A', '\0'};
    printf("%s \n", java);

    char c[] = "C language";
    printf("%s \n", c);

    char csharp[5] = "C#";
    printf("%s \n", csharp);

    printf("%c%c \n", csharp[0], csharp[1]);

    printf("\n////////////////////////////////////////////////\n");     
    // 문자열의 길이

    char str1[] = "C language is easy.";
    int i = 0;

    while (str1[i] != 0)
        i++;

    printf("문자열 \"%s\"의 길이는 %d 입니다. \n", str1, i);

    printf("\n////////////////////////////////////////////////\n");
    // 문자열 복사

    char str2[] = "The worst things to eat before you sleep.";
    char dst2[100];

    printf("원본 문자열 : %s\n", str2);

    for (i = 0; str2[i] != 0; i++) {
        dst2[i] = str2[i];
    }
    i++;
    dst2[i] = str2[i];

    printf("복사된 문자열 : %s\n", dst2);
    
    printf("\n////////////////////////////////////////////////\n");
    // char 형 포인터를 이용한 문자열 저장.
    // 상수형 문자열은 const char 형 포인터로만 받을 수 있음.

    const char *str3 = "test code.";
    //printf("%s\n", str3);
    while(*str3 != 0)
        printf("%c", *str3++);
    printf("\n");

    printf("\n////////////////////////////////////////////////\n");
    // 4번
    // 문자 입력

    char ch_4;      // int 형 변수를 이용할 시에는 아스키 코드값을 받게 됨.
    printf("getchar 테스트. 종료 : ctrl + z 입력.\n");
    while((ch = getchar()) != EOF)  // ctrl + Z 를 입력하면 종료됨.
        putchar(ch);

    printf("getche 테스트. 종료 : q 입력\n");
    while((ch = getche()) != 'q')
        putchar(ch);
    
    printf("\ngetch 테스트. 종료 : q 입력\n");
    while((ch = getch()) != 'q')
        putchar(ch);

    printf("\n////////////////////////////////////////////////\n");
    // 5번
    // 문자열 입력

    char name_5[20];
    char address_5[30];

    printf("이름을 입력해주십시오 >> ");
    gets(name_5);        // gets(name_5); 를 대신 사용가능.

    printf("현재 거주하는 주소를 입력하시오 >> ");
    gets(address_5);

    printf("\n////////////////////////////////////////////////\n");
    // 6번
    // 문자 처리 시스템

    int c_6;

    printf("islower(), toupper() 테스트. 전부 대문자로. 종료 : ctrl + z 입력.\n");
    while ((c_6 = getchar()) != EOF) {
        if (islower(c_6))
            c_6 = toupper(c_6);
        putchar(c_6);
    }

    int waiting_6;
    int i_6;
    char str_6[] = "The worst things to eat before you sleep.";

    for (waiting_6 = 0, i_6 = 6; str_6[i_6] != 0; waiting_6++, i_6++) {     // 에러 있음. worst가 Worst가 아니라 woRst로 나옴.
        if (waiting_6 == 0 && islower(str_6[i_6]))
            str_6[i_6] = toupper(str_6[i_6]);
        
        if (str_6[i_6] == ' ') 
            waiting_6 = -1;
    }
    puts(str_6);

    printf("\n////////////////////////////////////////////////\n");
    // 7번
    // 문자열 처리

    char str_7[] = "JAVA C++ C C# PYTHON";

    printf("%s \n", str_7);
    printf("문자열 길이 : %d \n", strlen(str_7));


    printf("\n////////////////////////////////////////////////\n");
    system("pause");
    return 0;
}