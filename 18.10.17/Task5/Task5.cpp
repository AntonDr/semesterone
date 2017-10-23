#include <iostream>
using namespace std;
int longe(long long int);
void newNumber(long long int &, int);
int main()
{
	long long int n;
	int  p;
	cin >> n >> p;
	newNumber(n,p);
	cout << n;
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
void newNumber(long long int &n,int p)
{
	long long int chg = n;
	int i = longe(n);
	int k = 1;
	for (; k <= i;)
	{
		k++;
		if (chg % 10 == p)
		{
			k--;
			i--;
			n = (n - n%int(pow(10, k)) + n%int(pow(10,k-1))*10)/10;
			
		}
		
		chg /= 10;
	}

}