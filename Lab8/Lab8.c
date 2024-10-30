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

// Задание 2. Усовершенствуйте программу разложения произвольного длинного числа на цифры для определения
void task_2() {
    while (1) {
        char array[100];
        int count_3 = 0, last_repeat = 0, count_evn = 0, count_greater_5 = 0;
        int odd = 0, greater_equal_7 = 0, multiply = 1, evn_excpt_last = 0;
        int count_same = 0, first_half = 0, second_half = 0;
        int evn_posit = 0, odd_posit = 0;
        char a;

        printf("Введите число: ");
        scanf("%s", array);

        int len = strlen(array);
        char last_digit = array[len - 1];

        for (int i = 0; i < len; i++) {
            int digit = array[i] - '0';

            // 1. Количество цифр 3 в числе
            if (array[i] == '3') {
                count_3++;
            }

            // 2. Число повторений последней цифры в числе
            if (array[i] == last_digit) {
                last_repeat++;
            }

            // 3. Количество четных цифр
            if (digit % 2 == 0) {
                count_evn++;
            }

            // 4. Количество цифр больших 5
            if (array[i] > '5') {
                count_greater_5++;
            }

            // 5. Сумма нечетных цифр
            if (digit % 2 != 0) {
                odd += digit;
            }

            // 6. Сумма цифр больше или равно 7
            if (array[i] >= '7') {
                greater_equal_7 += digit;
            }

            // 7. Произведение всех цифр, исключая 0
            if (array[i] != '0') {
                multiply *= digit;
            }

            // 9. Сумма четных цифр, исключая последнюю
            if (i < len - 1 && digit % 2 == 0) {
                evn_excpt_last += digit;
            }

            // 10. Рядом расположенные одинаковые цифры
            if (i < len - 1 && array[i] == array[i + 1]) {
                count_same++;
            }

            // 11. Равна ли сумма первой и второй половины цифр числа
            int half = len / 2;
            if (i < half) {
                first_half += digit;
            }
            else {
                second_half += digit;
            }

            // 12. Произведение сумм цифр, четных и нечетных разрядов (младший разряд - 1)
            if (i % 2 == 0) {
                evn_posit += digit;
            }
            else {
                odd_posit += digit;
            }
        }

        // 8. Произведение предпоследней и второй цифры числа
        int product_penultimate_second = 1;
        if (len >= 2) {
            int second_digit = array[1] - '0';
            int penultimate_digit = array[len - 2] - '0';
            product_penultimate_second = second_digit * penultimate_digit;
        }

        printf("Количество цифр 3 в числе: %d\n", count_3);
        printf("Число повторений последней цифры в числе: %d\n", last_repeat);
        printf("Количество четных цифр в числе: %d\n", count_evn);
        printf("Количество цифр больших 5 в числе: %d\n", count_greater_5);
        printf("Сумма нечетных цифр в числе: %d\n", odd);
        printf("Сумма цифр больше или равно 7 в числе: %d\n", greater_equal_7);
        printf("Произведение всех цифр, исключая 0, в числе: %d\n", multiply);
        printf("Произведение предпоследней и второй цифры числа: %d\n", product_penultimate_second);
        printf("Сумма четных цифр, исключая последнюю, в числе: %d\n", evn_excpt_last);
        printf("Количество рядом расположенных одинаковых цифр в числе: %d\n", count_same);

        if (first_half == second_half) {
            printf("Сумма первой и второй половины цифр числа равна.\n");
        }
        else {
            printf("Сумма первой и второй половины цифр числа не равна.\n");
        }

        int product_s = evn_posit * odd_posit;
        printf("Произведение сумм цифр, четных и нечетных разрядов: %d\n", product_s);

        printf("Продолжить? (Да - y, нет - n): ");
        getchar(); // Очистка буфера
        if ((a = getchar()) == 'n') break;
    }
}

// Задание 3 (индивидуальное). Написать программу, выводящую на экран заданную геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа. 
// Предусмотреть возможность изменения размеров фигуры путем задания ее размеров в количестве символов пользователем.
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
    task_2();
    // Задание 1
    task1_1();
    task1_2();
    task1_3();

    // Задание 3 (индивидуальное)
    task_HW_1();
    task_HW_2();

}
