#pragma once
#include<iostream>
using namespace std;
long long conversion(int);
long long conversely(long long);
void zeroOne(int &, int &, long long);
int lounge(int);
int transToInt(char);
int howIn(long long, int);
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
	while(a!=0)
	{
		n = n * 10 + a % 10;
		a /= 10;
	}
	return n;
}
void zeroOne(int & i, int & j, long long a)
{
	while(a!=0)
	{
		if (a % 10 == 1) i++;
		if (a % 10 == 0) j++;
		a /= 10;
	}

}
int transToInt(char find)
{
	int a;
	switch ( find)
	{
		case 'A':
			a = 1010;
			break;
		case 'B':
			a = 1011;
			break;
		case 'C':
			a = 1100;
			break;
		case 'D':
			a = 1101;
			break;
		case 'E':
			a = 1110;
			break;
		case 'F':
			a = 1111;
			break;
		case '1':
			a = 1;
			break;
		case '2':
			a = 10;
			break;
		case '3':
			a = 11;
			break;
		case '4':
			a = 100;
			break;
		case '5':
			a = 101;
			break;
		case '6':
			a = 110;
			break;
		case '7':
			a = 111;
			break;
		case '8':
			a = 1000;
			break;
		case '9':
			a = 1001;
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