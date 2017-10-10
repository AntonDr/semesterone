#include <iostream>
using namespace std;
double sinorsum(double, double);
double a, b, x, eps;
int main()
{
	cin >> a >> b >> eps;
	for (int i = 1; a <=b; i++)
	{
		cout << a << "      " << sinorsum(a, eps) << "      " << sin(a) << endl;
		a +=1;
	}
	system("pause");
	return 0;
}
double sinorsum(double x, double eps)
{
	double chang = x, sum = 0;
	for (int i = 1; fabs(chang) > eps; i++)
	{
		sum += chang;
		chang = -chang * x * x / (2 * i) / (2 * i + 1);
	}
	return sum;
}