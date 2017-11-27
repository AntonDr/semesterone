#include <iostream>
#include "forStrings.h"

using namespace std;

int main()
{
	char source[N] = "";
	char str[N] = "";
	int n;
	
	cin.getline(source, 255);
	cin.getline(str, 255);
	cin >> n;

	replaceByLength(source, n, str);
	cout << source;

	system("pause");
	return 0;
}