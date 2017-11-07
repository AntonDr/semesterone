#include <iostream>
#include "funcfile.h"
using namespace std;
int main()
{
	long long b,c;
	int a,j=0, i=0;
	cin >> a;
	b = conversion(a);
	c = conversely(b)/10;
	zeroOne(i, j,c );
	cout <<c << "\n"<<i << "\n" << j;
	system("pause");
	return 0;
}
