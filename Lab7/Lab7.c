// 8. Цикл с параметрами.  

#include <stdio.h> 
#include <locale.h> 
#include <math.h>  

// Задание 0. Напечатайте 10 символов '*' с использованием цикла for 
void task_0()
{
    // Возможность ввода количества печатаемых символов и вида символов. 
    int amount, a, b;
    puts("Введите количество символов:");
    scanf("%d", &amount);

    puts("Введите символы, которые вы хотите использовать:");
    scanf("%c %c", &a, &b);

    // Напечатайте в начале и\или в конце символ '+'; 
    putchar('+');

    //  Напечатайте полстроки одним символом, а вторую половину другим 
    // Печатайте после каждого символа восклицательный знак! 
    for (int start = 1; start <= amount / 2; start++)
    {
        putchar(a);
        putchar('!');
    }

    for (int start = 1; start <= amount / 2; start++)
    {
        putchar(b);
        putchar('!');
    }

    // Напечатайте в начале и\или в конце символ '+'; 
    putchar('+');
}

// Задание 1. Разработайте программу вычисления суммы целых чисел от m до n (включительно) 
void task_1()
{
    // Объявите необходимые переменные  
    int n, m;
    int s = 0, k = 1;

    // Организуйте ввод значений n и m с клавиатуры. 
    puts("Ввод значений n и m:");
    scanf("%d %d", &n, &m);

    for (int i = m; i >= n; i--)
    {
        // В теле цикла реализуйте накопление результата и вывод числа выполненных итераций 
        s += i;
        printf("Выполнено %d раз\n", k++);
    }

    // По завершению цикла необходимо вывести результат. 
    printf("Результат %d\n", s);
}

// Задание 2. Напишите программу табулирования  функции  с произвольным шагом согласно варианту. 
void task_2()
{
    double start = 2.00;
    double end = 4.10;
    double step;
    double x = start;

    setlocale(LC_ALL, "RUS");

    printf("\nТабулирование функции: f(x) = |lg x| - (x-2)^2\n");
    printf("Интервал: [2; 4.1]\n");
    printf("Введите шаг табуляции: ");
    scanf("%lf", &step);

    // Заголовок таблицы
    printf("______________________\n");
    printf("|  x   |    f(x)     |\n");
    printf("|--------------------|\n");

    // Табулирование функции
    for (x = start; x <= end; x += step) {
        double fx = fabs(log10(x)) - pow(x - 2, 2);
        //printf("| %3.20f | %10.5f  |\n", x, fx);
        printf("| %3.2f | %10.5f  |\n", x, fx);
    }
    printf("|____________________|\n");
}

// Задание 3. См.индивидуальный вариант.
void task_HW()
{
    int n;
    double result = 1.0;

    // Ввод значения n, которое впоследствии мы умножим на два
    printf("\nВведите значение n: ");
    scanf("%d", &n);

    // Вычисление произведения
    for (int i = 1; i <= n; i++) {
        result *= (1.0 - 1.0 / (2.0 * i));
    }
    printf("Результат: %f\n", result);
    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task_2();
    task_HW();
}
