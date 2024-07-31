#include <iostream>
using namespace std;

int main()
{
	cout << "-----------------------------------------1-----------------------------------------------------------\n";
	int kod1 = -10;
	int kod2 = 20;
	const int num1 = 5;
	int num_a[num1] = {};
	int num_b[num1] = {};
	int num_c[num1] = {};
	bool alma;

	for (int a = 0; a < num1; a++)
	{
		num_a[a] = rand() % (kod2 - kod1 + 1) + kod1;
	}
	for (int s = 0; s < num1; s++)
	{
		num_a[s] = rand() % (kod2 - kod1 + 1) + kod1;
	}
	cout << "M - : ";
	for (int a = 0; a < num1; a++)
	{
		cout << num_a[a] << ',';
	}
	cout << "\n";
	cout << "N - : ";
	for (int s = 0; s < num1; s++)
	{
		cout << num_a[s] << ',';
	}
	cout << "\n";
	cout << "C - : ";
	for (int d = 0; d < num1; ++d)
	{
		alma = false;
		for (int j = 0; j < d; ++j)
		{
			if (num_a[j] == num_b[d])
			{
				alma = true;
				break;
			}
		}
		if (alma)continue;
		for (int j = 0; j < num1; ++j)
		{
			if (num_b[d] == num_a[j])
			{
				cout << num_a[d] << ' ';
				break;
			}
		}
	}
	cout << "-----------------------------------------4-----------------------------------------------------------\n";
	int amin[20] = {};
	int alm[20] = {};
	int index = 0;
	srand(time(0));
	for (int k = 0; k < 20; k++)
	{
		amin[k] += rand() % 40 - 20;
	}
	for (int k = 0; k < 20; k++)
	{
		if (amin[k] >= 0)
		{
			alm[index] = amin[k];
			index++;
		}
	}
	for (int k = 0; k < 20; k++)
	{
		if (alm[k] < 0)
		{
			amin[index] = alm[k];
			index++;
		}
	}

}




