#include <iostream>
#include "forStrings.h"
#include "funcfile.h"

using namespace std;

int main()
{
	int const N = 200;
	char arr[N], find[N];
	
	cin.getline(arr, 199);
	cin.getline(find, 199);

	cout<<findIndex(arr, find);

	system("pause");
	return 0;
}