#include <stdio.h>
#include <Windows.h>
#include <string.h>

typedef struct _student {
    int number;
    char name[20];
    double grade;
} Student;

void data_input(Student *student, int number, char *name, double grade) {
    student->number = number;
    strcpy(student->name, name);
    student->grade = grade;
}

int main()
{
    system("chcp 65001");   // UTF-8
    system("cls");

    Student student_list[3];

    data_input(&student_list[0], 1, (char*)"Park", 3.42);
    data_input(&student_list[1], 2, (char*)"Kim", 4.31);
    data_input(&student_list[2], 3, (char*)"Lee", 2.98);

    for (int i = 0; i < 3; i++) {
        printf("학번 : %d \n", student_list[i].number);
        printf("이름 : %s \n", student_list[i].name);
        printf("성적 : %.2lf \n", student_list[i].grade);
        printf("\n////////////////////////////////////////////////\n");
    }

    system("pause");
    return 0;
}