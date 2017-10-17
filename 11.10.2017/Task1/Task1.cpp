#include <iostream>
using namespace std;
int ielement(long long);
void makenewmass(int , int & , int &, int );
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
void makenewmass(int n,int &howmmax,int &howmmin,int q )
{
	int *howm = new int[q];
	int j = q - 1;
	int t, f;
	f = j;
	for (int p = 0; p <= j; p++)
	{
		howm[p] = n % 10;
		n /= 10;
	}
	for (int k = 0; k<j; k++, j--)
	{
		t = howm[k];
		howm[k] = howm[j];
		howm[j] = t;
	}
	howmmax = howm[0];
	howmmin = howm[0];
	for (int k = 0; k <= f - 1; k++)
	{
		if (howm[k + 1] > howmmax)
			howmmax = howm[k + 1];
		if (howm[k + 1] < howmmin)
			howmmin = howm[k + 1];
	}
	delete[] howm;
}