// 9. Вложенные циклы

#include <stdio.h>
#include <locale.h>

#define ROW 9
#define COL 9

// Задание 1.  Составьте программы печати таблицы умножения, например в виде таблицы Пифагора 
void task1_1()
{
    int row, col;
    printf("\n");

    for (row = 1; row <= ROW; row++) {
        for (col = 1; col <= COL; col++)
            printf("%5d", col * row);
        printf("\n");
    }

    system("pause");
}

// 2. Измените программу, так чтобы выводился только левый нижний треугольник таблицы Пифагора
void task1_2()
{
    int row, col;
    printf("\n");

    for (row = 1; row <= ROW; row++) {
        for (col = 1; col <= row; col++)  // Изменено условие цикла
            printf("%5d", col * row);
        printf("\n");
    }

    system("pause");
}

// 3. Аналогичным образом организуйте печать чисел в заданном виде (см. инд. вариант)
void task1_3()
{
    int start = 41; // Начальное значение для первой строки
    int rows = 4;   // Количество строк
    printf("\n");

    for (int row = 0; row < rows; row++) {
        if (row == 2) {
            // В зависимости от того какая это строка по счёту, выводим строку с тремя точками
            printf("%-5s %-5s %-5s %-5s\n", "...", "...", "...", "...");
        }
        else {
            // Выводим строку с числами и точками
            printf("%-5d %-5d %-5s %-5d\n", start + row * 10, start + row * 10 + 1, "...", start + row * 10 + 9);
        }
    }

    system("pause");
}

// Сделать второе задание

void task_HW_1() 
{
    int a, b;
    char symbol;
    printf("\n");

    // Ввод параметров от пользователя
    printf("Введите высоту треугольника (a): ");
    scanf("%d", &a);
    printf("Введите ширину треугольника (b): ");
    scanf("%d", &b);
    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol); // Пробел перед %c для игнорирования предыдущего перевода строки

    // Проверка на корректность введенных данных
    if (a <= 0 || b <= 0) {
        printf("Ошибка: высота и ширина должны быть положительными числами.\n");
        return 1;
    }

    // Рисование треугольника 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == a - 1 || j == 0 || j == i) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}


void task_HW_2() 
{
    int a, b;
    char symbol;
    printf("\n");

    // Ввод параметров от пользователя
    printf("Введите высоту треугольника (a): ");
    scanf("%d", &a);
    printf("Введите ширину треугольника (b): ");
    scanf("%d", &b);
    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol); // Пробел перед %c для игнорирования предыдущего перевода строки

    // Проверка на корректность введенных данных
    if (a <= 0 || b <= 0) {
        printf("Ошибка: высота и ширина должны быть положительными числами.\n");
        return 1;
    }

    // Рисование треугольника
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == a - 1 || j == 0 || j == i) {
                printf("%c", symbol);
            }
            else {
                printf("%c", symbol); // Заполнение внутренней части
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    // Задание 1
    task1_1();
    task1_2();
    task1_3();

    // Задание 3 (индивидуальное)
    task_HW_1();
    task_HW_2();

}