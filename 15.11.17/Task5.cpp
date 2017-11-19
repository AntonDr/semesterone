#include <iostream>
#include "forStrings.h"
#include "funcfile.h"

using namespace std;

int main()
{
	int const N = 109;
	char arr[N], test[N];
	int n, l;

	cin.getline(arr, 108);
	cin.getline(test, 108);
	cin >> n;

	strChange(arr, test, n);

	cout << arr;

	system("pause");
	return 0;

}