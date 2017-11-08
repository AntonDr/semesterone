#pragma once
#include<iostream>
using namespace std;
long long conversion(int);
long long conversely(long long);
void zeroOne(int &, int &, long long);
int lounge(int);
int transToInt(char);
int howIn(long long, int);
int transToSixteenAndCheck(int, char);
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
			a = 10;
			break;
		case 'B':
			a = 11;
			break;
		case 'C':
			a =12;
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
int transToSixteenAndCheck(int a,char find)
{
	int b, c,s,k=0;
	s = transToInt(find);
	while (a != 0)
	{
		b = a / 16;
		c = a - (b*16);
		if (c == s) k++;
		a /= 16;
	}
	return k;

}