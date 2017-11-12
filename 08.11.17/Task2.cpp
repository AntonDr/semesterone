#include <iostream>
#include "funcfile.h"
using namespace std;
int main()
{
	int n,check;
	cin >> n>>check;
	int *arr = new int[n];
	inputArray(arr, n);
	cout<<lessThanNumber(arr, n, check);
	delete arr;
	system("pause");
	return 0;
}