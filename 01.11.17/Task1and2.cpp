#include <iostream>
#include "funcfile.h"
using namespace std;
int main()
{
	int a,j=0, k=0;
	cin >> a;
	checkZeroOne(a, j, k);
	cout << "number of zeros = "<< j<< "\n" <<"number of units = " << k<<endl;
	system("pause");
	return 0;
}
