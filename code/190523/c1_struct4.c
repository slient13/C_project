#include <stdio.h>
#include <Windows.h>

typedef struct _date {
    int month;
    int day;
    int year;
} Date;

typedef struct _student {
    int number;
    char name[20];
    double grade;
    Date *date;
} Student;

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    Date d = {3, 20, 1980};
    Student s = {20070001, "Kim", 4.3};

    s.date = &d;

    printf("학번 : %d \n", s.number);
    printf("이름 : %s \n", s.name);
    printf("학점 : %0.2lf \n", s.grade);
    printf("생년월일 : %d.%d.%d \n", s.date->month, s.date->day, s.date->year);

    system("pause");
    return 0;
}