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
	
	resultOfcheckByOrder(checkByOrder(arr, test));
	
	cout << ('Xs' > 'X');

	system("pause");
	return 0;
}