#include <iostream>
#include "forStrings.h"
#include "funcfile.h"

using namespace std;

int main()
{
	int const N = 200;
	char arr[N];
	char test[N];
	
	cin.getline(arr, 199);
	cin.getline(test, 199);

	cout << equality(arr, test);

	system("pause");
	return 0;
}