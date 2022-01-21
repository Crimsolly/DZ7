
#include <iostream>
using namespace std;

namespace mylib
{
	float* createArr (const size_t size)
	{
		float* pArr = new (nothrow) float[size];
		if (pArr != nullptr)
		{
			for (size_t i = 0; i < size; i++)
			{
				pArr[i] = (rand() % 100) - 50;
			}

		}
		return pArr;
	}
	void printArr(const float* arr, const size_t size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void printArr(const int* arr, const size_t size)
	{
		cout << arr[0];
		for (size_t i = 0; i < size; i++)
		{
			cout << " " << arr[i];
		}
		cout << endl;
	}
	void printPandN(const float* arr, const size_t size)
	{
		int a = 0, b = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				a++;
			}
			else if(arr[i] < 0)
			{
				b++;
			}
			cout << "Положительных = " << a << endl;
			cout << "Отрицательных = " << b << endl;
		}

	}
	
#define SWAP_INT (x, y) int temp = x; x = y; y = temp;

	void sortArr(const int* arr, const size_t size)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			for (size_t g = 0; g < size - i - 1; g++)
			{
				if (arr[g] > arr[g + 1])
				{
					SWAP_INT(arr[g], arr[g + 1]);
				}
			}
		}


	}
}








