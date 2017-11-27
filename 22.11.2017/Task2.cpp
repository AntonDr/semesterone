#include <iostream>
#include "funcfile.h"
#include "forStrings.h"

using namespace std;

int main()
{
	char source[N] = "";
	double n;
	int p,k;

	cin >> n >> p;

	translateIntoAnyNumberSystem(source, n, p);
	 
	cout << source;




	system("pause");
	return 0;
}