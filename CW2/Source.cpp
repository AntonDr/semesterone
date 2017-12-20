#include "forMatrix.h"

using namespace std;

int main()
{
	int matrix[N][N];
	
	int n, m;

	cin >> n >> m;

	inputRandomMatrix(matrix, n, m);

	displayMatrix(matrix, n, m);

	cout << endl;

	findMinAndSwap(matrix, n, m);

	displayMatrix(matrix, n, m);

	cout << endl;

	findAllMinAndSwap(matrix, n, m);

	displayMatrix(matrix, n, m);

	cout << endl;

	sortByDescendingly(matrix, n, m);

	displayMatrix(matrix, n, m);

	cout << endl;

	displaySymmetrically(matrix, n, m);

	displayMatrix(matrix, n, m);
	
	cout << endl;
	
	sortBySum(matrix, n, m);

	displayMatrix(matrix, n, m);

	cout << endl;

	system("pause");
	return 0;
}