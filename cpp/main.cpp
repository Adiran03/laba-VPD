#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string name_ru = "Чнаваян Адриан";
    string name_en = "Adrian Chnvayan";
    int num = 29;
    string group = "М03-104БВ-26";
    string lang = "C++";

    int control = 304 * num;

    cout << "Hello to 304 from " << name_en << ", number " << num << ", group " << group << "!" << endl;
    cout << "Привет, 304! Это " << name_ru << ", номер " << num << ", группа " << group << "!" << endl;
    

    cout << "Student ID: " << group << "/";
    cout << setw(2) << setfill('0') << num;
    cout << " | Language: " << lang << " | Control: " << control << endl;

    return 0;
}
