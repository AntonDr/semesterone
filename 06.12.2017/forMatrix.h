#pragma once
#define N 100

#include <iostream>

using namespace std;

void inputRandomMatrix(int[][N], int, int);

void inputMatrix(int[][N], int, int);

void findMaxAndClear(int[][N], int &, int &);

//void task7(int[][N], int, int);

void displayMatrix(int[][N], int, int,int =0);

int findMaxInMatrixNextTime(int[][N], int, int, int , int &, int &);

void insertionSort(int *, int,int matrix[][N]);

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

void sortBySum(int matrix[][N], int n, int m)
{
	int * sumArr = new int[n];

	int sum ;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += matrix[i][j];
		}
		
		sumArr[i] = sum;
	}
	insertionSort(sumArr, n,matrix);
}

void insertionSort(int * arr, int n,int matrix[][N])
{
	int j = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		j = i;
		while (j && (arr[j] < arr[j - 1]))
		{
			swapByStr(matrix[j],matrix[j - 1]);
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