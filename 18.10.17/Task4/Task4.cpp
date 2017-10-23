#include <iostream>
using namespace std;
int longe(long long int);
void newNumber(long long int &, int,int  );
int main()
{
	long long int n;
	int z,p;
	cin >> n >> p>>z;
	newNumber(n, z, p);
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
void newNumber(long long int &n, int z,int p)
{	
	long long int chg = n;
	int i = longe(n);
	for(int k = 1; k <= i; k++)
	{
		if(chg%10==p)
		{
			n = n - n%int(pow(10, k)) + n%int(pow(10, k - 1)) + z*int(pow(10, k-1));
		}
		chg /= 10;
	}

}