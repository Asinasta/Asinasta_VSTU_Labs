// 7. Многоальтернативная обработка 

// Задание 1.  Познакомьтесь с использованием оператора switch на примере простой программы распознавания символов. 
#include <stdio.h> 
#include <locale.h> 
#include <math.h>  

#define _CRT_SECURE_NO_DEPRECATE 

void task_1()

{
	// 2. Напишите программу, так чтобы она "определяла" цифры  
	// выводила сообщение - "это буква" или "'это цифра" в зависимости от введенного пользователем символа. 
	char c;

	printf("Введите символ (букву или цифру): ");
	scanf("%c", &c);	//считывание с консоли 

	switch (c)
	{
	case 'a': case 'A':
	case 'b': case 'B':
	case 'c': case 'C':
	case 'd': case 'D':
	case 'e': case 'E':
	case 'f': case 'F':
	case 'g': case 'G':

		printf("Введено %c - это буква\n", c);
		break;

	case '1': case '2':
	case '3': case '4':
	case '5': case '6':
	case '7': case '8':
	case '9':

		printf("Введено %c - это цифра\n", c);
		break;

	default:
		printf("Неизвестный символ\n");

	}
	return 0;
}

// Задание 2. Напишите программу "Калькулятор" для вычисления простых арифметических действий - сложение, деление, умножение и вычитание. 
void task_2()
{
	float x, y;
	char c;

	// Оформите приглашение к вводу данных, так чтобы вводимая пользователем информация могла быть получена функцией: 
	puts("Введите пример:");
	scanf("%f %c %f", &x, &c, &y);

	// С использованием оператора switch интерпретируйте введенный символ для определения вида операции. 
	switch (c)
	{
	case '+':
		printf("=%f\n", x + y);
		break;
	case '-':
		printf("=%f\n", x - y);
		break;
	case '*':
		printf("=%f\n", x * y);
		break;
	case '/':
		printf("=%f\n", x / y);
		break;
	case '%':
		printf("=%d\n", (int)x % (int)y);
		break;

		// Для разработанной программы придумайте дополнительный функционал (например, возведение в степень)  
	case '^':
		printf("=%f\n", pow(x, y));
		break;

	default:
		printf("Неизвестные символы\n");
	}

}

void task_HW()
{
	// Написать программу, которая для заданного возраста в месяцах (от 1 до 60)  
	// выводит текстовое сообщение, отображающее возраст в годах и месяцах с правильным склонением. 
	int months;

	printf("Введите ваш возраст в месяцах (от 1 до 60): ");
	scanf("%d", &months);

	if (months < 1 || months > 60) 
	{
		printf("Введите корректный возраст от 1 до 60 месяцев.\n");
	}

	int years = months / 12;
	int r_months = months % 12;

	printf("Ваш возраст: ");

	// Вывод лет
	if (years > 0) 
	{
		switch (years) 
		{
		case 1:
			printf("1 год");
			break;
		case 2:
		case 3:
		case 4:
			printf("%d года", years);
			break;
		default:
			printf("%d лет", years);
			break;
		}
	}

	// Если есть годы и месяцы, добавляем "и"
	if (years > 0 && r_months > 0) 
	{
		printf(" и ");
	}

	// Вывод месяцев
	if (r_months > 0) 
	{
		switch (r_months) 
		{
		case 1:
			printf("1 месяц");
			break;
		case 2:
		case 3:
		case 4:
			printf("%d месяца", r_months);
			break;
		default:
			printf("%d месяцев", r_months);
			break;
		}
	}
}

int main()
{

	setlocale(LC_ALL, "RUS");
	task_1();
	task_2();
	task_HW();

}