#include <iostream>
using namespace std;
double x, eps;
double sum(double , double);
int main()
{
	cin >> eps>> x;
	cout <<"sum="<< sum(eps, x) << "\n" << "Cos" << x<< "=" <<cos(x) << endl;
	system("pause");

	return 0;
}
double sum(double eps, double x)
{
	double summ=0,chang=1;
	for (int i=0; fabs(chang) > eps; i++)
	{	
		summ += chang;
		chang = -chang*x*x / (2*i + 1) / (2*i + 2);
	}
	return summ;

}