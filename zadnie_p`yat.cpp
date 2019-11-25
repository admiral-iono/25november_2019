﻿//Задача 5. Условие:
//Напишите программу, находящую все простые числа Ченя не превосходящие n.Программа должна работать не более чем за O(n* log log n) шагов.

#include <iostream>
#include <vector>

using namespace std;
//процедура для нахождения ЧЕНИ
void ChechNYA(int& n)
{
	vector <int> f(n + 3, 0);
	int d = 2;
	while (d * d <= n)
	{
		for (int i = d * d; i <= n; i += d)
		{
			f[i]++;
		}
		++d;
	}
	for (int i = 2; i <= n; i++)
	{
		if (f[i + 2] <= 1 && f[i] == 0)
		{
			cout << i << " ";
		}
	}
}

int main()
{
	int n;
	cin >> n;
	ChechNYA(n);
}