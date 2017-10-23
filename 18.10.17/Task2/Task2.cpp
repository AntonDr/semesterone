#include <iostream>
using namespace std;
int longe(long long int );
int whichSquence(long long int);
void whichPrint(long long int);
int main()
{
	long long int n;
	cin >> n;
	whichPrint(n);
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
int whichSquence(long long int n)
{	
	int i = longe(n), j = 0;
	for (int k = 1; k <= i-1; k++)
	{
		if (n%10 > (n/10)%10)
		{
			j++;
		}
		else if (n % 10 < (n / 10) % 10)
		{
			j--;
		}
		n /= 10;
	}
	return j;
}
void whichPrint(long long int n)
{
	int j = whichSquence(n);
	int i = longe(n);
	if (j == i-1) cout << "ascending sequence";
	if (j == -i+1) cout << "decreasing sequence";
	if(j!=i-1 && j!=-i+1) cout << "the sequence is unordered";	
}
