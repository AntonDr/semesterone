#pragma once
#include<iostream>
using namespace std;
long long conversion(int);
long long conversely(long long);
void zeroOne(int &, int &, long long);
int lounge(int);
int transToInt(char);
void swap(int &, int &);
int howIn(long long, int);
void inputArray(int[], int);
void inputRandomArray(int[], int);
void checkZeroOne(int, int &, int &);
void insertionSort(int[], int);
void displayArray(int[], int);
int transToSixteenAndCheck(int, char);
void whichSqencePrint(int , int , int , int);
void checkOfSqence(int [],int, int &, int &, int &);
void howMany(int[],int n, int &, int &, int &);
void bubbleSort(int[], int);
int lessThanNumber(int[], int, int);
int lounge(int a)
{
	int i = 0;
	while (a != 0)
	{
		a /= 10;
		i++;
	}
	return i;
}
long long conversion(int a)
{
	long long dwn = 1;
	while (a != 0)
	{
		if (a % 2 == 0)
		{
			dwn *= 10;
		}
		else
		{
			dwn = dwn * 10 + 1;
		}
		a /= 2;
	}
	return dwn;
}
long long conversely(long long a)
{
	long long n = 0;
	while (a != 0)
	{
		n = n * 10 + a % 10;
		a /= 10;
	}
	return n;
}
void zeroOne(int & i, int & j, long long a)
{
	while (a != 0)
	{
		if (a % 10 == 1) i++;
		if (a % 10 == 0) j++;
		a /= 10;
	}

}
int transToInt(char find)
{
	int a;
	switch (find)
	{
	case 'A':
		a = 10;
		break;
	case 'B':
		a = 11;
		break;
	case 'C':
		a = 12;
		break;
	case 'D':
		a = 13;
		break;
	case 'E':
		a = 14;
		break;
	case 'F':
		a = 15;
		break;
	case '1':
		a = 1;
		break;
	case '2':
		a = 2;
		break;
	case '3':
		a = 3;
		break;
	case '4':
		a = 4;
		break;
	case '5':
		a = 5;
		break;
	case '6':
		a = 6;
		break;
	case '7':
		a = 7;
		break;
	case '8':
		a = 8;
		break;
	case '9':
		a = 9;
		break;
	case '0':
		a = 0;
		break;
	}
	return a;
}
int howIn(long long c, int na)
{
	int k = 0;
	while (c != 0)
	{
		if (c % 10000 == na) k++;
		c /= 10000;
	}
	return k;
}
int transToSixteenAndCheck(int a, char find)
{
	int b, c, s, k = 0;
	s = transToInt(find);
	while (a != 0)
	{
		b = a / 16;
		c = a - (b * 16);
		if (c == s) k++;
		a /= 16;
	}
	return k;

}
void checkZeroOne(int a, int & j, int & k)
{
	while (a != 0)
	{
		if (a % 2 == 0) j++;
		else k++;
		a /= 2;
	}
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void insertionSort(int arr[], int n)
{
	int j = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		j = i;
		while (j && (arr[j] < arr[j - 1]))
		{
			swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}
void displayArray(int arr[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void inputArray(int arr[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
}
void inputRandomArray(int arr[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		arr[i] = rand() % 100;
	}
}
void bubbleSort(int arr[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
}
int lessThanNumber(int arr[], int n, int check)
{	
	int k = n/2,remember=0,forbr=0;
	insertionSort(arr, n);
	if (arr[(n-1)/2]<=check)
	{	
		while (arr[k]<check && forbr<n)
		{	
			remember = k;
			k = (n + k) / 2;
			forbr++;
		}
		return remember + 1;
	}
	else if(arr[(n - 1) / 2] >= check)
	{
		while (arr[k] > check)
		{
			remember = k;
			k = (n - k) / 2;
			forbr++;
			if (forbr > n) return 0;
		}
		return remember;
	}
	return 0;
}
void checkOfSqence(int arr[],int n, int &j, int &q, int &g)
{
	for (int i=0;i<n-1;i++)
	{
		if (arr[i+1] > arr[i])
		{
			j++;
		}
		else if (arr[i+1] < arr[i])
		{
			j--;
		}

		if (arr[i + 1] == arr[i])
		{
			g++;
		}
		if (arr[i + 1] == arr[i])
		{
			q--;
		}
	}
}
void whichSqencePrint(int n, int j, int q, int g)
{
	if ((j == n - 1) && g == 0) cout << "ascending sequence";
	else if ((j == -n + 1) && q == 0) cout << "decreasing sequence";
	else if ((j + g == n - 1) && g != 0 && j != 0) cout << "non strictly increasing sequence";
	else if ((j + q == -n + 1) && q != 0 && j != 0) cout << "non strictly decreasing sequence";
	else if (((g ==	n - 1) && (j == 0)) && ((q == -n + 1) && j == 0)) cout << "monoton";
	else cout << "the sequence is unordered";
}
void howMany(int arr[],int n, int &j, int &k, int &g)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (arr[i]==0) j++;
		if (arr[i] > 0) g++;
		if (arr[i] < 0) k++;
	}
}