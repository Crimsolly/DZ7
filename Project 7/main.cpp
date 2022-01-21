
#include <iostream>
#include <fstream>

#include "mylib.h"
#include "mylib.cpp"

using namespace std;

void task5()
{
	const short size = 10;
	const float* arr = mylib::createArr(size);

	if (arr != nullptr)
	{
		mylib::printArr(arr, size);
		mylib::printPandN(arr, size);

		delete[] arr;
	}

}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
#define IN_RANGE(x, y) ((x >=0 && x < y) ? "true" : "false")

void task2()
{
	int num;
	cin >> num;
	cout << IN_RANGE(num, 10) << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
#define ARR_SIZE 10

void task3()
{
	int* arr = new (nothrow) int[ARR_SIZE];

	if (arr != nullptr)
	{
		cout << "Введите" << ARR_SIZE << "числа:" << endl;
		for (size_t i = 0; i < ARR_SIZE; i++)
		{
			cin >> arr[i];
		}

		mylib::sortArr(arr, ARR_SIZE);
		mylib::printArr(arr, ARR_SIZE);

		delete[] arr;
	}
}