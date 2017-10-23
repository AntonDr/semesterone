#include <iostream>
#include <math.h>
using namespace std;
bool numPolin(long long int);
int lounge(long long int);
int main()
{
	long long int n;
	cin >> n;
	cout << numPolin(n);
	system("pause");
	return 0;
}
int lounge(long long int n)
{
	long long int del = n;
	int i = 0;
	while (del > 0)
	{
		del/= 10;
		i++;
	}
	return i;
}
bool numPolin(long long int n)
{
	int i = lounge(n);
	for (int k = 1; k <= i; k += 2)
	{
		if ((n / int(pow(10, i - k))==(n % 10)))
		{
			n %= int(pow(10, i - k));
			n /= 10;
			continue;
		}
		else return false;
	}
	return true;
}