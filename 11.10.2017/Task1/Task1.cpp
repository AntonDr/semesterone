#include <iostream>
using namespace std;
int ielement(long long);
void makenewmass(long long int , int & , int &, int );
int main()
{
	long long int n, del;
	cin >> n;
	int q,howmmax=0,howmmin=0;
	q = ielement(n);
	makenewmass(n,howmmax,howmmin, q);
	cout << q << "\n" << howmmax << "\n" << howmmin;
	system("pause");
	return 0;
}
int ielement(long long n)
{
	long long del = n;
	int i = 0;
	while (del > 0)
	{
		del /= 10;
		i++;
	}
	return i;
}
void makenewmass(long long int n,int &max,int &min,int q)
{
	max = 0;
	min = 10;
	for (int i = 1; i <= q; i++)
	{
		if (n % 10 > max) max = n % 10;
		if (n % 10 < min) min = n % 10;
		n /= 10;
	}
}