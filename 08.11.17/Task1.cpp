#include <iostream>
#include "funcfile.h"
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	inputArray(arr, n);
	bubbleSort(arr, n);
	displayArray(arr, n);
	delete arr;
	system("pause");
	return 0;
}