#include "funcfile.h"

using namespace std;

int main()
{
	int source[N] = {0};
	
	int first=-1,last=-1;

	int n;

	cin >> n;

	//inputRandomArray(source, n);

	inputArray(source, n);

	displayArray(source, n);

	findFirstAndLastZero(source, n, first, last);

	if (first == -1)
	{
		cout << "No zero elements" << endl;
	}
	else
	{
		cout << "index of the first zero - " << first << endl << "index of the last zero - " << last << endl;
	}

	cout << "Product of negative = " << theProductOfNegative(source, first, last) << endl;

	deletePositive(source, n);
	displayArray(source, n);
	
	int k = n;
	
	newOrder(source, n);
	
	displayArray(source, n);

	system("pause");
	return 0;
}