#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	string result;
	cout << "Enter assessment in ten-point system" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	case 2:
		result = "was absent";
		break;
	case 3:
	case 4:
		result = "not satisfactorily";
		break;
	case 5:
	case 6:
		result = "satisfactorily";
		break;
	case 7:
	case 8:
		result = "good";
		break;
	case 9:
	case 10:
		result = "excellent";
		break;
	default:
		result = "an incorrect estimate was introduced";
		break;
	}
	cout << a << " is " << result << endl;
	system("pause");
	return 0;

}