#include "forMatrix.h"

using namespace std;

int main()
{	
	int n, m;

	int matrix[N][N] = { 0 };
	
	cin >> n >> m;

	inputMatrix(matrix, n, m);
	
	displayMatrix(matrix, n, m);

	cout << endl;
	
	findMaxAndClear(matrix, n, m);

	displayMatrix(matrix, n, m);
	
	system("pause");
	return 0;
}