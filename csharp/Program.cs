using System;

class Program {
    static void Main() {
        string nameRu = "Чнаваян Адриан";
        string nameEn = "Adrian Chnvayan";
        int num = 29;
        string group = "М03-104БВ-26";
        string lang = "C#";

        string studentId = $"{group}/{num:D2}";
        int control = 304 * num;

        Console.WriteLine($"Hello to 304 from {nameEn}, number {num}, group {group}!");
        Console.WriteLine($"Привет, 304! Это {nameRu}, номер {num}, группа {group}!");
        Console.WriteLine($"Student ID: {studentId} | Language: {lang} | Control: {control}");
    }
}
