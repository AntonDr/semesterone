#include <iostream>
using namespace std;
int longe(long long int );
void whichSquence(long long int,int &,int &,int &);
void whichPrint(long long int, int, int,int);
int main()
{
	long long int n;
	int j=0, q=0,g=0;
	cin >> n;
	whichSquence(n, j, q,g);
	whichPrint(n,j,q,g);
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
void whichSquence(long long int n,int &j,int &q,int &g)
{	
	int i = longe(n);
	for (int k = 1; k <= i - 1; k++)
	{
		if (n % 10 > (n / 10) % 10)
		{
			j++;
		}
		else if (n % 10 < (n / 10) % 10)
		{
			j--;
		}

		if (n % 10 == (n / 10) % 10)
		{
			g++;
		}
		if (n % 10 == (n / 10) % 10)
		{
			q--;
		}
		n /= 10;
	}
}
void whichPrint(long long int n,int j,int q,int g)
{
	
	int i = longe(n);
	if ((j == i - 1) && g==0) cout << "ascending sequence";
	else if ((j == -i + 1) && q==0) cout << "decreasing sequence";
	else if ((j + g == i - 1) && g != 0 && j!=0) cout<< "non strictly increasing sequence";
	else if ((j + q == -i + 1) && q != 0 && j!=0) cout << "non strictly decreasing sequence";
	else if (((g == i - 1) && (j == 0)) && ((q == -i + 1) && j == 0)) cout << "monoton";
	else cout << "the sequence is unordered";
}