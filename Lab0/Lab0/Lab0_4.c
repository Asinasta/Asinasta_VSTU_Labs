// ������� 4. ������� ���� � ��������� ������.

#include <stdio.h> 
#include <locale.h> 
#include <stdlib.h> 

// ������� ��� ��������� ����� � ������ ����� ������ � ���
void name()
{
	puts("*******************************************************************");
	puts("*                                                                 *");
	puts("*          �������� ������: 1. ��������� � ����������             *");
	puts("*          ����������� ���������� � ����� ���������� MVS 2022     *");
	puts("*          �������� ��������� �������������                       *");
	puts("*                                                                 *");
	puts("*******************************************************************");
}

// ������� ��� ������ ���� ��������
void date()
{
	puts("*******************************************************************");
	puts("*                                                                 *");
	puts("*          ���� ��������: 07.10.2006                              *");
	puts("*                                                                 *");
	puts("*******************************************************************");
}

int main()
{
	setlocale(LC_ALL, "RUS"); // ��� ������������ ������� ��������� 
	name();	// ����� ������� ��� ��������� ����� � ������ ����� ������ � ���
	date();	// ����� ������� ��� ������ ���� ��������
	return 0;
}