#include <iostream>
#include "funcfile.h"
using namespace std;

int main()
{
	int na;
	long long a,b, c;
	char find;
	cin >> a>>find;
	b = conversion(a);
	c = conversely(b)/10;
	na = transToInt(find);
	cout << howIn(c, na);
	
	
	system("pause");
	return 0;
}