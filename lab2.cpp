#include <iostream>

using namespace std;

void printArray(int* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << &(arr[i]) << " ";
	}
	cout << endl;
}

int main()
{
	const int size = 3;
	int arr[size];

	int* mas = new int[size];

	cout << "ONE_DIMENSIONAL_1" << endl;
	printArray(arr, size);
	
	cout << "ONE_DIMENSIONAL_2" << endl;
	printArray(mas, size);

	
	int arr2[size][size];

	int** mas2 = new int* [size];
	for (int i = 0; i < size; i++)
	{
		mas2[i] = new int[size];
	}

	cout << "TWO_DIMENSIONAL_1" << endl;
	for (int i = 0; i < size; ++i)
	{
		printArray(arr2[i], size);
	}
	
	cout << "TWO_DIMENSIONAL_2" << endl;
	for (int i = 0; i < size; i++)
	{
		printArray(mas2[i], size);
	}

	for (int i = 0; i < 2; i++)
	{
		delete[] mas2[i];
	}
	delete[] mas2;
	delete mas;

	return 0;
}

