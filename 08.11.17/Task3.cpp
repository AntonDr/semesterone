#include <iostream>
#include "funcfile.h"
using namespace std;
int main()
{
	int n,j=0,g=0,q=0;
	cin >> n;
	int *arr = new int[n];
	inputArray(arr, n);
	checkOfSqence(arr, n, j, q, g);
	whichSqencePrint(n, j, q, g);
	delete arr;
	system("pause");
	return 0;
}