#pragma once
#include<iostream>

using namespace std;

int strLength(char *);

bool isAlphabet(char);

bool isLowerAlphabet(char);

void toUpper(char *);

int findIndex(char *, char *, int = 0);

void resultOfcheckByOrder(int);

int checkByOrder(char *, char *);

bool equality(char *, char *);

int strLength(char * arr)
{
	int i = 0;
	
	while (arr[i])
	{
		i++;
	}
	
	return i;
}

bool isAlphabet(char check)
{
	return ((check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z'));
}

bool equality(char * arr, char *test)
{
	int n = strLength(arr), l = strLength(test);
	
	if (n != l) return false;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != test[i]) return false;
	}

	return true;
}

int  checkByOrder(char * arr, char * test)
{
	toUpper(arr);
	toUpper(test);
	int i = 0,value=0;
	while (arr[i] == test[i] && arr[i] && test[i])
	{
		i++;
	}

	if (arr[i] > test[i])
	{
		value = 1;
	}
	else if (arr[i] < test[i])
	{
		value = 2;
	}

	return value;
}

void resultOfcheckByOrder(int n)
{
	switch (n)
	{
		case 1:
			cout << "the first line is greater than the second" << endl;
			break;
		case 2:
			cout << "the first line is less than the second" << endl;
			break;
		case 0:
			cout << "equal";
			break;
	}
}

void toUpper(char * arr)
{
	int n = strLength(arr);
	
	for  (int i = 0; i < n; i++)
	{
		if (isLowerAlphabet(arr[i]))
		{
			arr[i] = arr[i] - ('a' - 'A');
		}
	}
}

bool isLowerAlphabet(char ch)
{
	return(ch >= 'a' && ch <= 'z');
}

int findIndex(char *arr, char * find,int position)
{
	char value = find[0];
	int n = strLength(find), length = strLength(arr), p = 0;

	for (int i = position; i < length; i++)
	{
		if (arr[i] == value)
		{
			while (p<=n-1)
			{
				p++;
				if (arr[i + p] != find[p]) break;
				
			}
			if (p == n) return i;
			else p = 0;
		}
	}
	return -1;
}

void strChange(char *arr, char *test,int n)
{
	int length = strLength(arr), l = strLength(test);
	int i;
	for ( i = 0; i < length;)
	{
		for (int j = 0;j<n; i++ , j++)
		{
			if(j<l) arr[i] = test[j];
			else arr[i] = '-';
		}
	}
	arr[i + 1] = '\0';
	length = strLength(arr);
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == '-')
		{
			for (int j = i; j < length-1; j++)
			{
				arr[j] = arr[j + 1];
			}
			length--;
		}
	}

}
