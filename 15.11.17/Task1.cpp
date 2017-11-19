#include <iostream>
#include "funcfile.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	int *arr = new int[n];

	inputRandomArray(arr, n);
	displayArray(arr, n);

	inclusionSort(arr, n);
	displayArray(arr, n);

	delete[]arr;

	system("pause");
	return 0;
}