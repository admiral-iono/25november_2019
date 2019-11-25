
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	long long left, right;
	cin >> left;
	//четная 
	if (left % 2 == 0)
	{
		left = pow(10, left / 2 - 1);
		right = left * 10;


		for (long long i = left; i < right; i++)
		{
			cout << i;
			long long t = i;
			while (t)
			{
				cout << t % 10;
				t /= 10;
			}
			cout << "\n";
		}
	}
	//нечетная 
	else
	{
		left = pow(10, left / 2 - 1);
		right = left * 10;


		for (long long i = left; i < right; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << i << j;

				long long t = i;
				while (t)
				{
					cout << t % 10;
					t /= 10;
				}
				cout << "\n";
			}
		}
	}
}
/*
  программа эффективная, так как не является перебором, а выводит только нужные числа
 */