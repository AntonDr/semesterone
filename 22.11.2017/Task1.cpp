#include <iostream>
#include "forStrings.h"

using namespace std;

int main()
{
	char source[N];
	char newarray[N] = "";

	cin.getline(source, 255);

	createWordsArray(source, newarray);

	cout << newarray;

	system("pause");
	return 0;
}