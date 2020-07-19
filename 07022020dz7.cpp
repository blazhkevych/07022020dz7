/*
Задание 7: Пользователь вводит два целых числа.Необходимо вывести все целые числа, на которые оба введенных числа делятся без остатка.
*/
#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int num, num2, delitel = 2;
	cout << "Введите первое целое число: \n";
	cin >> num;
	cout << "Введите второе целое число: \n";
	cin >> num2;
	cout << "Все целые числа, на которые оба введенных числа делятся без остатка:\n";
	while (delitel <= num || delitel <= num2)
	{
		if (num % delitel == 0 && num2 % delitel == 0)
		{
			cout << delitel << "; ";
		}
		delitel++;
	}
	cout << endl;
	return 0;
}
