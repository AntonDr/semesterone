#include <iostream>
#include "forStrings.h"

using namespace std;

int main()
{
	char source[N];
	int n;

	cin.getline(source, 255);
	cin >> n;

	deleteByLength(source, n);

	cout << source;

	system("pause");
	return 0;
}