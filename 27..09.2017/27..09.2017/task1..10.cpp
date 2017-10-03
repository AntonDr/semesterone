#include <iostream>
#include <cmath>
using namespace std;
int n;
char numb;
double res;

double funca(int n)
{
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{
		res += (1.0 / i);
	}
	return res;
}
double funcb(int n)
{
	res = pow(2, n);
	return res;
}
double funcv(int n)
{
	res = 1;
	for (int i = 1.0; i <= n; i++)
	{
		res *= (1+(1.0 / i/i));
	}
	return res;
}
double funcg(int n)
{
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{
		res += (	pow(-1,i+1) / i/(i+1));
	}
	return res;
}
double funcd(int n)
{
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{
		res += (1.0 /pow(i,5));
	}
	return res;
}
double funce(int n)
{
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{
		res += (1.0 / pow((2*i+1), 2));
	}
	return res;
}
double funcj(int n)
{
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{
		res += (pow(-1,i)/(2 * i + 1));
	}
	return res;
}
double funcz(int n)
{
	double zm,ch = 1;
	zm = 0;
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{	
		for (int j = 1.0; j <= i; j++)
		{
			ch *= j;
			zm += (1.0 / j);
			
		}
		res += (ch/zm);
		ch = 1;
		zm = 0;
	}
	return res;
}
double funci(int n)
{
	res = 0;
	for (int i = 1.0; i <= n; i++)
	{
		res = sqrt(2 + res);
	}
	return res;
}
double funck(int n)
{
	double zm = 0;
	res = 0;
	
	for (int i = 1.0; i <= n; i++)
	{
		for (int j = 1.0; j <= i; j++)
		{
			zm += sin(j);
		}
		res += 1 / zm;
	}
	return res;
}

int main()
{
	bool a = true;
	char r = 'y';
	while (r == 'y')
	{
		a = true;
		while (a)
		{
			cout << "Select a letter tasks(a,b,..,k)" << endl;
			cin >> numb;
			switch (numb)
			{
				case 'a':
					a = false;
					break;
				case 'v':
					a = false;
					break;
				case 'b':
					a = false;
					break;
				case 'g':
					a = false;
					break;
				case 'd':
					a = false;
					break;
				case 'e':
					a = false;
					break;
				case 'j':
					a = false;
					break;
				case 'z':
					a = false;
					break;
				case 'i':
					a = false;
					break;
				case 'k':
					a = false;
					break;
				default:
					cout << "invalid data" << endl;
					a = true;
					break;
			}

		}
		while (true)
		{
			cout << "Enter natural number" << endl;
			cin >> n;
			if (n >= 1) break;
			cout << "Invalid data" << endl;
		}
		double result = 0;
		switch (numb)
		{
				case 'a':
					result = funca(n);
					break;
				case 'v':
					result = funcv(n);
					break;
				case 'b':
					result = funcb(n);
					break;
				case 'g':
					result = funcg(n);
					break;
				case 'd':
					result = funcd(n);
					break;
				case 'e':
					result = funce(n);
					break;
				case 'j':
					result = funcj(n);
					break;
				case 'z':
					result = funcz(n);
					break;
				case 'i':
					result = funci(n);
					break;
				case 'k':
					result = funck(n);
					break;
		}

		cout << result << endl;
		cout << "Cacculate another tasks? (y/n)" << endl;
		cin >> r;
	}
	return 0;
	
}