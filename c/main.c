#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char name_ru[] = "Чнваня Адриан";
    char name_en[] = "Adrian Chnvanya";
    int num = 29;
    char group[] = "М03-104БВ-26";
    char lang[] = "C";

    char student_id[50];
    sprintf(student_id, "%s/%02d", group, num);

    int control = 304 * num;

    printf("Hello to 304 from %s, number %d, group %s!\n", name_en, num, group);
    printf("Привет, 304! Это %s, номер %d, группа %s!\n", name_ru, num, group);
    printf("Student ID: %s | Language: %s | Control: %d\n", student_id, lang, control);

    return 0;
}
