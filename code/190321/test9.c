#include <stdio.h>
#include <Windows.h>

int condition_age[] = {3, 14, 18, 70};
int condition_time[] = {17, 10};

int check(int age, int hour, int minute, int card[]);

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    int age, hour, minute, card[2], price;
    int type;   // 0: 일반, 1: 할인, 2: 특별 할인, 3: 무료 입장

    while(1)
    {   // 데이터 입력
        printf("나이를 입력해 주십시오 : ");
        scanf("%d", &age);
        
        // 13세 미만
        if (age < condition_age[1])     
            break;

        printf("입장 시간을 입력해 주십시오(예시 17:10) : ");
        scanf("%d:%d", &hour, &minute);
        
        // 17:10 이상
        if (hour >= 18 || (hour == 17 && minute >= 10))      
            break;
        // 70세 이상
        if (age >= condition_age[3])    
            break;

        printf("복지카드를 가지고 계신가요. (yes = 1, no = 0) : ");
        scanf("%d", card[0]);
        
        // 복지카드 소지
        if (card[0] == 1)           
            break;

        printf("국가유공자카드를 가지고 계신가요. (yes = 1, no = 0) : ");
        scanf("%d", card[1]);
        
        // 입력 종료
        break;                      
    }

    type = check(age, hour, minute, card);  // 표 구분

    {   // 가격 지정
        if (type == 0)
            price = 10000;
        else if (type == 1)
            price = 8000;
        else if (type == 2)
            price = 4000;
        else if (type == 3)
            price = 0;
    }

    {   // 가격 출력
        if (price != 0)
            printf("입장료는 %d원 입니다.\n", price);
        else
            printf("무료입니다.\n");
    }    

    system("pause");
    return 0;
}

int check(int age, int hour, int minute, int card[])
{
    if (age < condition_age[0])
        return 3;
    
    ////////////////////////////////////////////////
    if (age < condition_age[1])
        return 2;
    else if (hour >= 18 || (hour == 17 && minute >= 50))
        return 2;
    
    ////////////////////////////////////////////////
    if (age < condition_age[2])
        return 1;
    else if (age >= condition_age[3])
        return 1;
    else if (card[0] == 1)
        return 1;
    else if (card[1] == 1)
        return 1;

    ////////////////////////////////////////////////
    return 0;
}