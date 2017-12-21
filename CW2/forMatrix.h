#pragma once
#define N 100

#include <iostream>

using namespace std;

void inputRandomMatrix(int[][N], int, int);

void inputMatrix(int[][N], int, int);

void findMaxAndClear(int[][N], int &, int &);

//void task7(int[][N], int, int);

void displayMatrix(int[][N], int, int,int =0);

void swapColumn(int matrix[][N], int n, int m, int firstColumn, int twoColumn);

int findMaxInMatrixNextTime(int[][N], int, int, int , int &, int &);

void insertionSort(int * arr, int n, int matrix[][N], int m);

void swapByStr(int * , int *);

void findMaxInMatrix(int[][N], int, int, int &, int &, int &);

void clearStringAndColumn(int[][N],int &,int&, int &, int &);



void inputRandomMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100 - 100 / 2;
		}
	}
}

void inputMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void task_7(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n/2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			swap(matrix[i][j], matrix[n - i-1][m - j-1]);
		}
	}
}

void displayMatrix(int matrix[][N], int n, int m,int k)
{
	for (int i = 0; i < n-k; i++)
	{
		for (int j = 0; j < m-k; j++)
		{
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void swapByStr(int *a, int *b)
{
	int * temp = a;
	a = b;
	b = temp;
}


void insertionSort(int * arr, int n,int matrix[][N],int m)
{
	int j = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		j = i;
		
		while (j && (arr[j] > arr[j - 1]))
		{
			swapColumn(matrix,n,m,j,j-1);
			j--;
		}
	}
}

void findMaxInMatrix(int matrix[][N],int n,int m,int &max,int &iMax,int &jMax)
{	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				iMax = i;
				jMax = j;
			}
		}
	}
}

int findMaxInMatrixNextTime(int matrix[][N], int n, int m, int max, int &iMax, int &jMax)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == max)
			{
				max = matrix[i][j];
				iMax = i;
				jMax = j;
				return max;
			}
		}

	}

	return -1;
}

void clearStringAndColumn(int matrix[][N], int &n, int &m, int &iMax, int &jMax)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = jMax; j < m; j++)
		{
			matrix[i][j] = matrix[i][j + 1];
		}
	}

	for (int i = iMax; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = matrix[i + 1][j];
		}
	}

	n--;
	m--;
}

void findMaxAndClear(int matrix[][N], int &n, int &m)
{
	int max, iMax = 0, jMax = 0;

	max = matrix[0][0];

	findMaxInMatrix(matrix, n, m, max, iMax, jMax);

	while (max != -1)
	{
		clearStringAndColumn(matrix, n, m, iMax, jMax);
		
		max = findMaxInMatrixNextTime(matrix, n, m, max, iMax, jMax);
	}
}

void findMinAndSwap(int matrix[][N], int n, int m)
{
	int min = matrix[0][0];

	int iMin = 0, jMin = 0;

	for (int i = 1,j=0; i < n; i++)
	{
		if (matrix[i][j]<min)
		{
			min = matrix[i][j];
			iMin = i;
			jMin = j;
		}
	}

	swap(matrix[0][0], matrix[iMin][jMin]);
}

void findAllMinAndSwap(int matrix[][N], int n, int m)
{
	int min = matrix[0][1];

	int iMin = 0, jMin = 0;
	
	int k = 0, q = 1,p=0;


	
	while (q<m)
	{
		for (int i = k, j=q; i < n; i++)
		{
			if (p == m) break;
			
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
				iMin = i;
				jMin = j;
			}

		}

		swap(matrix[k][q], matrix[iMin][jMin]);
		k++;
		p++;
		

		if (k == n - 1 || p==m)
		{
			k = 0;
			p = 0;
			q++;
		}

		min = matrix[k][q];
		iMin = k;
		jMin = q;
	}
}

void sortByDescendingly(int matrix[][N], int n, int m)
{
	int j = 0,k=m,iMax=m,jMax=0;

	int max = matrix[k][j];
	
	while(j<m)
	{
		for (int i =k; i < n; i++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				iMax = i;
				jMax = j;
			}
		}
		
		swap(matrix[k][j], matrix[iMax][jMax]);
		
		k++;
		
		if (k == n - 1)
		{
			k = m;
			j++;
		}

		max = matrix[k][j];
		iMax = k;
		jMax = j;
	}
}

void displaySymmetrically(int matrix[][N],int n,int m)
{
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = k; j < m; j++)
		{
			swap(matrix[i][j], matrix[n - i - 1][m - j - 1]);
		}
		k++;
	}
}

void sortBySum(int matrix[][N], int n, int m)
{
	int sumArr[N] = { 0 };
	int sum = 0;

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum += abs(matrix[i][j]);
		}

		sumArr[j] = sum;
		sum = 0;
	}
	
	insertionSort(sumArr, n, matrix, m);
}

void swapColumn(int matrix[][N], int n, int m, int firstColumn, int twoColumn)
{
	for (int i = 0; i < n; i++)
	{
		swap(matrix[i][firstColumn], matrix[i][twoColumn]);
	}
}
