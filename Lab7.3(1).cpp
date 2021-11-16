#include <iostream>
#include <iomanip>
using namespace std;
void Print(int** a, const int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

int Sum(int** a, const int rowCount, const int colCount)
{
	int sum = 0;
	for (size_t i = 0; i < rowCount; i++)
	{
		int sum_0 = 0;
		bool isNegative = false;
		for (size_t j = 0; j < colCount; j++)
		{
			if (a[i][j] < 0) {
				isNegative = true;
			}
		}
		if (isNegative)
		{
			for (int j1 = 0; j1 < colCount; j1++)
				sum += a[i][j1];
		}
	}
	return sum;
}
void Find_k(int** a, const int n)
{
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				cout << a[i][j] << " ";
		}
	}
}

int main()
{
	int n;
	cout << "Enter n "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "," << j << "] = "; cin >> a[i][j];
		}
	Print(a, n);
	int sum =Sum(a, n, n);
		cout << "Sum = " << sum << endl;
		Find_k(a, n);
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}

