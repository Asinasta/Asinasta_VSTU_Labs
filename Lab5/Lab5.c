// 6. ���������� ��������������� ����������.

// ������ 1. �������� ���������, ������� ��������� �������� �� ��������� ��� ����������.

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void task_1()
{
	// a. ���������� ����� ����������, years;
	int years, ost;
	// b. ����������� � ����� ����;
	puts("������� ���, ������� ��� ����������:");
	// c. ���� � ���������� ��������;
	scanf("%d", &years);
	// d. ���������� ������� �� ������� ���������� ����� �� 4;
	ost = years % 4;
	//  ���������� ��������� if�else ��� ������ �� �����
	// ������ �� ���� ��������� � ����������� ��� � ���� �� ���������� 
	if (ost == 0) {
		printf("��� %d ����������\n", years);
	}
	else {
		printf("��� %d �� ����������\n", years);
	}

}

// ������ 2. �������� ��������� ��� ���������� �������� ������� F(x).
void task_2()
{
	int x, y;
	puts("������� �����:");
	scanf("%d", &x);

	//if (x>3) {
	//	y = (x / (x * x + 1));
	//}
	//else {
	//	y = (-(x * x) + 3 * x + 9);
	//}

	y = x > 3 ? (x / (x * x + 1)) : (-(x * x) + 3 * x + 9);

	printf("%d", y);
}

// ������� 3. �������������� �������

// ������� 12. ���� ����������� �����, ������� ����������� �������. 
// ��������� ������ �������� ��������������� ��������� ���� ������ ������ � �������� �����.

void task_3()
{
	int num, one, ten, hundred;

	puts("������� ���� �����:");
	scanf("%d", &num);

	// ��������� ����� � �����
	hundred = (num / 100);  // ������� �� 100 ���� �����
	ten = ((num % 100) / 10);  // ������� �� ������� �� 100, ����� ����� �� 10, �������� �������
	one = (num % 10);  // ������� �� ������� �� 10, �������� �������

	// �������� ������� �����
	// printf("����� - %d, ������ ����� - %d, ������ ����� - %d, ������ ����� - %d\n", num, hundred, ten, one);

	// ����� ����������� �������� � ����� ���������������� ���������
	if (one == ten) {
		printf("����� ������ � �������� �����\n");
	}
	if (ten == hundred) {
		printf("����� �������� � ����� �����\n");
	}
	if (hundred == one) {
		printf("����� ����� � ������ �����\n");
	}
	else {
		printf("����������� ������� �����������\n");
	}

}

int main()
{
	setlocale(LC_ALL, "RUS");
	task_3();
}