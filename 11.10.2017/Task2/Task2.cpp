#include <iostream>
using namespace std;
bool another(int);
int main()
{
	int n;
	cin >> n;
	cout << another(n);
	system("pause");
	return 0;
}
bool another(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= n - 1; i++)
		if ((n % i == 0)) return false;
	return true;
}