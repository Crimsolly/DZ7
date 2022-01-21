#pragma once

namespace mylib
{
	
	float* pArr(const size_t size);

	void printArr(const float* arr, const size_t size);
	void printArr(const int* arr, const size_t size);

	void printPandN(const float* arr, const size_t size);

	void sortArr(const int* arr, const size_t size);
}