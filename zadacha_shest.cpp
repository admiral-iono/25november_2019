//Задача 6. Условие: 
//Напишите эффективную функцию, выписывающую из массива длины n все элементы, у которых количество двоек в троичной записи меньше k. Функция должна возвращать общее количество двоек в троичной записи всех чисел массива. В комментариях напишите, почему перебор - эффективный


#include <iostream>
#include <vector>

using namespace std;

long long find(long long k, vector <long long>& arr)
{
	size_t arrSize = arr.size();
	long long cnt = 0;
	for (size_t i = 0; i < arrSize; i++)
	{
		long long t = arr[i];
		long  tmpK = 0;
		for (int j = 0; t; j++)
		{
			if (t % 3 == 2)
			{
				cnt++;
				tmpK++;
			}
			t /= 3;
		}
		if (tmpK < k)
		{
			cout << arr[i] << " ";
		}
	}

	return cnt;
}

int main()
{
	long long n, k;
	cin >> n >> k;
	vector <long long> arr(n);
	for (auto i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	find(k, arr);
}
/*
Перебор эффективный, так как работает за O(n * log m), где m - средняя длина чисел. Выводим только палиндромы
 */