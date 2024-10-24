// 8. ���� � �����������.  

#include <stdio.h> 
#include <locale.h> 
#include <math.h>  

// ������� 0. ����������� 10 �������� '*' � �������������� ����� for 
void task_0()
{
    // ����������� ����� ���������� ���������� �������� � ���� ��������. 
    int amount, a, b;
    puts("������� ���������� ��������:");
    scanf("%d", &amount);

    puts("������� �������, ������� �� ������ ������������:");
    scanf("%c %c", &a, &b);

    // ����������� � ������ �\��� � ����� ������ '+'; 
    putchar('+');

    //  ����������� ��������� ����� ��������, � ������ �������� ������ 
    // ��������� ����� ������� ������� ��������������� ����! 
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

    // ����������� � ������ �\��� � ����� ������ '+'; 
    putchar('+');
}

// ������� 1. ������������ ��������� ���������� ����� ����� ����� �� m �� n (������������) 
void task_1()
{
    // �������� ����������� ����������  
    int n, m;
    int s = 0, k = 1;

    // ����������� ���� �������� n � m � ����������. 
    puts("���� �������� n � m:");
    scanf("%d %d", &n, &m);

    for (int i = m; i >= n; i--)
    {
        // � ���� ����� ���������� ���������� ���������� � ����� ����� ����������� �������� 
        s += i;
        printf("��������� %d ���\n", k++);
    }

    // �� ���������� ����� ���������� ������� ���������. 
    printf("��������� %d\n", s);
}

// ������� 2. �������� ��������� �������������  �������  � ������������ ����� �������� ��������. 
void task_2()
{
    double start = 2.0;
    double end = 4.1;
    double step;
    double x;

    setlocale(LC_ALL, "RUS");

    printf("\n������������� �������: f(x) = |lg x| - (x-2)^2\n");
    printf("��������: [2; 4.1]\n");
    printf("������� ��� ���������: ");
    scanf("%lf", &step);

    // ��������� �������
    printf("____________________\n");
    printf("|  x  |   f(x)   |\n");
    printf("------------------\n");

    // ������������� �������
    for (x = start; x <= end; x += step) {
        double fx = fabs(log10(x)) - pow(x - 2, 2);
        printf("| %.2f | %.6f |\n", x, fx);
    }

    printf("____________________\n");

    return 0;
}

// ������� 3. ��.�������������� �������.
void task_HW()
{
    int n;
    double result = 1.0;

    // ���� �������� n, ������� ������������ �� ������� �� ���
    printf("\n������� �������� n: ");
    scanf("%d", &n);

    // ���������� ������������
    for (int i = 1; i <= n; i++) {
        result *= (1.0 - 1.0 / (2.0 * i));
    }

    printf("���������: %f\n", result);

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task_2();
    task_HW();
}