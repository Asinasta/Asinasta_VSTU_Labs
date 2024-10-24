// 9. ��������� �����

#include <stdio.h>
#include <locale.h>

#define ROW 9
#define COL 9

// ������� 1.  ��������� ��������� ������ ������� ���������, �������� � ���� ������� �������� 
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

// 2. �������� ���������, ��� ����� ��������� ������ ����� ������ ����������� ������� ��������
void task1_2()
{
    int row, col;
    printf("\n");

    for (row = 1; row <= ROW; row++) {
        for (col = 1; col <= row; col++)  // �������� ������� �����
            printf("%5d", col * row);
        printf("\n");
    }

    system("pause");
}

// 3. ����������� ������� ����������� ������ ����� � �������� ���� (��. ���. �������)
void task1_3()
{
    int start = 41; // ��������� �������� ��� ������ ������
    int rows = 4;   // ���������� �����
    printf("\n");

    for (int row = 0; row < rows; row++) {
        if (row == 2) {
            // � ����������� �� ���� ����� ��� ������ �� �����, ������� ������ � ����� �������
            printf("%-5s %-5s %-5s %-5s\n", "...", "...", "...", "...");
        }
        else {
            // ������� ������ � ������� � �������
            printf("%-5d %-5d %-5s %-5d\n", start + row * 10, start + row * 10 + 1, "...", start + row * 10 + 9);
        }
    }

    system("pause");
}

// ������� ������ �������

void task_HW_1() 
{
    int a, b;
    char symbol;
    printf("\n");

    // ���� ���������� �� ������������
    printf("������� ������ ������������ (a): ");
    scanf("%d", &a);
    printf("������� ������ ������������ (b): ");
    scanf("%d", &b);
    printf("������� ������ ��� ���������: ");
    scanf(" %c", &symbol); // ������ ����� %c ��� ������������� ����������� �������� ������

    // �������� �� ������������ ��������� ������
    if (a <= 0 || b <= 0) {
        printf("������: ������ � ������ ������ ���� �������������� �������.\n");
        return 1;
    }

    // ��������� ������������ 
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

    // ���� ���������� �� ������������
    printf("������� ������ ������������ (a): ");
    scanf("%d", &a);
    printf("������� ������ ������������ (b): ");
    scanf("%d", &b);
    printf("������� ������ ��� ���������: ");
    scanf(" %c", &symbol); // ������ ����� %c ��� ������������� ����������� �������� ������

    // �������� �� ������������ ��������� ������
    if (a <= 0 || b <= 0) {
        printf("������: ������ � ������ ������ ���� �������������� �������.\n");
        return 1;
    }

    // ��������� ������������
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == a - 1 || j == 0 || j == i) {
                printf("%c", symbol);
            }
            else {
                printf("%c", symbol); // ���������� ���������� �����
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
    // ������� 1
    task1_1();
    task1_2();
    task1_3();

    // ������� 3 (��������������)
    task_HW_1();
    task_HW_2();

}