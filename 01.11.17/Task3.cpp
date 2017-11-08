#include <iostream>
#include "funcfile.h"
using namespace std;

int main()
{
	int a,na;
	long long b, c;
	char find;
	cin >> a>>find;
	na=transToSixteenAndCheck(a, find);
	cout << na;
	
	
	system("pause");
	return 0;
}