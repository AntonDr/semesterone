#include <iostream>
using namespace std;
int longe(long long int);
void longSquence(long long int,int &,int &);
int main()
{
	long long n;
	int j=1,q = 0;
	cin >> n;
	longSquence(n, q,j);
	cout << q << " " << j;
	system("pause");
	return 0;
}
int longe(long long int n)
{
	long long int del = n;
	int i = 0;
	while (del > 0)
	{
		del /= 10;
		i++;
	}
	return i;
}
void longSquence(long long int n,int &q,int &j)
{
	int i = longe(n), d, max = 0;
	for (int k = 1; k <= i; k++)
	{ 
		if (n % 10 == (n / 10) % 10)
		{
			j++;
			q = n % 10;
			if (max <j)
			{
				max = j;
				d = q;
			}
		} 
		else 
		{
			j = 1;
		}
		n /= 10;
	}
	j = max;
	q = d;
}