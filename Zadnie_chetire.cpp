#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long n, k;
	cin >> n >> k;
	vector <long long> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		auto t = arr[i];
		auto tmpK = 1;
		for (int j = 0; t; j++)
		{
			if (t % 10 != 0)
			{
				tmpK *= t % 10;
			}
			t /= 10;
		}
		if (abs(tmpK) > k)
		{
			if (arr[i] == 0 && arr[i] > k)
			{
				cout << arr[i] << " ";
			}
			else if (arr[i] != 0)
			{
				cout << arr[i] << " ";
			}
		}
	}
}
/*
   перебор эффективный, так как работает за O(n * log m),
   m - средняя длина чисел
 */