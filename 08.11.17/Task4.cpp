#include <iostream>
#include "funcfile.h"
using namespace std;
int main()
{
	int n, zero = 0, lessZero = 0, aboveZero = 0;
	cin >> n;
	int *arr = new int[n];
	inputArray(arr, n);
	howMany(arr, n, zero, lessZero, aboveZero);
	cout << "number of zeros = " << zero << endl << "the number of positive = " << aboveZero << endl << "the number of negative = " << lessZero << endl;
	delete arr;
	system("pause");
	return 0;
}