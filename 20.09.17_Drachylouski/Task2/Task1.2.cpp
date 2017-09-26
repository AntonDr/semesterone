#include <iostream>
#include <string>
using namespace std;
int main()
{	
	int a;
	string result;
	cin >> a;
	switch (a)
	{
		case 1:
		case 2:
		case 12:
			result = "winter";
			break;
		case 3:
		case 4:
		case 5:
			result = "spring";
			break;
		case 6:
		case 7:
		case 8:
			result = "summer";
			break;
			
		case 9:
		case 10:
		case 11:
			result = "autumn";
			break;
		default:
			result = "incorrect number";
			break;
	}
	cout << result << endl;
	system("pause");
	return 0;
}