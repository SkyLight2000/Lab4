// Lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <windows.h>

#define m 5
#define n 10

int main()
{
	//Lab Variant 19
	SetConsoleOutputCP(1251);
	char str[m][n];
	char a[n];
	printf("Введите %d слов\n", m);
	for (int i = 0; i < m; i++) {
		gets_s(str[i]);
	}
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j<m; j++)
			if (strlen(str[i]) > strlen(str[j]))
			{
				strcpy_s(a, str[i]);
				strcpy_s(str[i], str[j]);
				strcpy_s(str[j], a);
			}
	printf("Отсортированный массив: \n");
	for (int i = 0; i < m; i++) {
		printf("%s\t\n", str[i]);
	}
	system("pause");
	return 0;
}
