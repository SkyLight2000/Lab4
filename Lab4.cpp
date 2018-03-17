﻿// Lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <windows.h>
#include <stdio.h>

#define m 3
#define n 10

int main()
{
	//Lab Variant 19
	SetConsoleOutputCP(1251);
	printf("Введите %d слов\n", m);
	char** str = (char**)malloc(m * sizeof(char*));
	for (int i = 0; i < m; i++) {
		str[i] = (char*)malloc(n * sizeof(char));
	}
	for (int i = 0; i < m; i++) {
		scanf_s("%s", str[i]);
	}
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (strlen(str[i]) > strlen(str[j]))
			{
				char(*a) = str[i];
				str[i] = str[j];
				str[j] = a;
			}
	printf("Отсортированный массив: \n");
	for (int i = 0; i < m; i++) {
		printf("%s\t\n", str[i]);
	}
	for (int i = 0; i < m; i++) {
		free(str[i]);
	}
	free(str);
	system("pause");
	return 0;
}
