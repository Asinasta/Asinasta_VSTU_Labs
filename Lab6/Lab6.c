// 7. ������������������� ��������� 

// ������� 1.  ������������� � �������������� ��������� switch �� ������� ������� ��������� ������������� ��������. 
#include <stdio.h> 
#include <locale.h> 
#include <math.h>  

#define _CRT_SECURE_NO_DEPRECATE 

void task_1()

{
	// 2. �������� ���������, ��� ����� ��� "����������" �����  
	// �������� ��������� - "��� �����" ��� "'��� �����" � ����������� �� ���������� ������������� �������. 
	char c;

	printf("������� ������ (����� ��� �����): ");
	scanf("%c", &c);	//���������� � ������� 

	switch (c)
	{
	case 'a': case 'A':
	case 'b': case 'B':
	case 'c': case 'C':
	case 'd': case 'D':
	case 'e': case 'E':
	case 'f': case 'F':
	case 'g': case 'G':

		printf("������� %c - ��� �����\n", c);
		break;

	case '1': case '2':
	case '3': case '4':
	case '5': case '6':
	case '7': case '8':
	case '9':

		printf("������� %c - ��� �����\n", c);
		break;

	default:
		printf("����������� ������\n");

	}
	return 0;
}

// ������� 2. �������� ��������� "�����������" ��� ���������� ������� �������������� �������� - ��������, �������, ��������� � ���������. 
void task_2()
{
	float x, y;
	char c;

	// �������� ����������� � ����� ������, ��� ����� �������� ������������� ���������� ����� ���� �������� ��������: 
	puts("������� ������:");
	scanf("%f %c %f", &x, &c, &y);

	// � �������������� ��������� switch ��������������� ��������� ������ ��� ����������� ���� ��������. 
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

		// ��� ������������� ��������� ���������� �������������� ���������� (��������, ���������� � �������)  
	case '^':
		printf("=%f\n", pow(x, y));
		break;

	default:
		printf("����������� �������\n");
	}

}

void task_HW()
{
	// �������� ���������, ������� ��� ��������� �������� � ������� (�� 1 �� 60)  
	// ������� ��������� ���������, ������������ ������� � ����� � ������� � ���������� ����������. 
	int months;

	printf("������� ��� ������� � ������� (�� 1 �� 60): ");
	scanf("%d", &months);

	if (months < 1 || months > 60) 
	{
		printf("������� ���������� ������� �� 1 �� 60 �������.\n");
	}

	int years = months / 12;
	int r_months = months % 12;

	printf("��� �������: ");

	// ����� ���
	if (years > 0) 
	{
		switch (years) 
		{
		case 1:
			printf("1 ���");
			break;
		case 2:
		case 3:
		case 4:
			printf("%d ����", years);
			break;
		default:
			printf("%d ���", years);
			break;
		}
	}

	// ���� ���� ���� � ������, ��������� "�"
	if (years > 0 && r_months > 0) 
	{
		printf(" � ");
	}

	// ����� �������
	if (r_months > 0) 
	{
		switch (r_months) 
		{
		case 1:
			printf("1 �����");
			break;
		case 2:
		case 3:
		case 4:
			printf("%d ������", r_months);
			break;
		default:
			printf("%d �������", r_months);
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