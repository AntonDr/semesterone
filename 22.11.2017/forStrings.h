#pragma once
#include<iostream>
#define N 256

using namespace std;


void strChangeBySymbol(char *, char, int, int);

void deleteByLength(char *, int);

void strReverse(char *);

void strReplace(char *, char *,char *);

int strLength(char *);

bool isAlphabet(char);

void swap(char &, char &);

bool isLowerAlphabet(char);

void toUpper(char *);

int findIndex(char *, char *,int =0);

void resultOfcheckByOrder(int);

int checkByOrder(char *, char *);

int findAlphabet(char *,int = 0);

int findNotAlphabet(char *, int = 0);

bool equality(char *, char *);

void replaceByLength(char *, int, char *);

void strDel(char * source, char * str);

void swap(char & a, char & b)
{
	char temp = a;
	a = b;
	b = temp;
}

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

int findAlphabet(char * source,int position)
{
	int length = strLength(source);
	
	for (int i = position; i < length; i++)
	{
		if (isAlphabet(source[i])) return i;
	}
	
	return -1;
}

int findNotAlphabet(char * source, int position)
{
	int length = strLength(source);
	
	for (int i = position; i < length; i++)
	{
		if (!isAlphabet(source[i])) return i;
	}

	return -1;
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

void strCopy(char * source, char * destination, int from, int to)
{
	if (from < 0) from = 0;
	if (to > strLength(source)) to = strLength(source);

	for (int i = from,j=0; i < to; i++,j++)
	{
		destination[j] = source[i];
	}
}

void strConCat(char * source, char * str1, int index)
{
	int n = strLength(source), l = strLength(str1);
	if (index > n) index = n;
	if (n - l + index > 0)
	{
		strChangeBySymbol(source, '\0', index , n);
	}
	for (int i = index,j=0; j <l; i++,j++)
	{
		source[i] = str1[j];
	}
}

void strChangeBySymbol(char *source, char ch, int from, int to)
{
	for (int i = from; i <=to; i++)
	{
		source[i] = ch;
	}
}

void strDel(char * source, char * str)
{
	int n = findIndex(source, str);
	char result[N] = "";
	while (n!=-1)
	{
		strCopy(source, result, n + strLength(str), strLength(source));
		strConCat(source, result, n);
		n = findIndex(source, str, n);
		strChangeBySymbol(result, '\0', 0, strLength(result));
	}
}

void strReplace(char * source, char * str,char * replace)
{
	int k = strLength(replace);
	int n = findIndex(source, str);
	int l = strLength(str);
	char result[N] = "";
	while (n != -1)
	{
		strCopy(source, result, n + l, strLength(source));
		strConCat(source, replace, n);
		strConCat(source, result, n+k);
		n = findIndex(source, str, n+k);
		strChangeBySymbol(result, '\0', 0, strLength(result));
	}
}
void replaceByLength(char * source, int n, char * str)
{
	int length = strLength(source), l = strLength(str);
	int q = 0, m = 0, k = 0;
	char result[N] = "";
	
	source[length] = ' ';
	source[length + 1] = '\0';
	length++;

	while (q!=-1 && m!=-1)
	{	
		q= findAlphabet(source, m-k);
		m = findNotAlphabet(source, q);
		
		if (m - q == n)
		{
			strCopy(source, result, m, strLength(source));
			strConCat(source, str, q);
			strConCat(source, result, q + l);
			strChangeBySymbol(result, '\0', 0, strLength(result));
			k = n - l;
		}
		else k = 0;

	}
}

void deleteByLength(char * source, int n)
{
	int length = strLength(source);
	int q = 0, m = 0, k = 0;
	char result[N] = "";
	
	source[length] = ' ';
	source[length + 1] = '\0';
	length++;
	
	while (q != -1 && m != -1)
	{
		q = findAlphabet(source, m-k);
		m = findNotAlphabet(source, q);

		if (m - q == n)
		{
			strCopy(source, result, m+1, strLength(source));
			strConCat(source, result, q);
			strChangeBySymbol(result, '\0', 0, strLength(result));
			k = n;
		}
		else k = 0;
	}
}

void strReverse(char * source)
{
	int l = strLength(source);
	for (int i = 0; i < l / 2; i++)
	{
		swap(source[i], source[l -1 - i]);
	}
}

void createWordsArray(char * source, char * newarray)
{
	int length = strLength(source);
	int q = 0, m = 0, k = 0;
	char result[N] = "";

	source[length] = ' ';
	source[length + 1] = '\0';
	length++;

	while (true)
	{
		q = findAlphabet(source, m - k);
		m = findNotAlphabet(source, q);
		
		if (q == -1 || m == -1) break;
		
		strCopy(source, result, q, m);
		strConCat(newarray, result, m);
		
		newarray[strLength(newarray)] = ' ';
		newarray[strLength(newarray)+1] = '\0';
		
		strChangeBySymbol(result, '\0', 0, strLength(result));
	}

}