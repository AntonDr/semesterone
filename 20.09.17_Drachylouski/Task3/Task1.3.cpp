#include <iostream>
#include <string>
using namespace std;

string onenum(int c)
{
	string resultt;
	if (c >0 && c <= 9)
	{
		switch (c)
		{
		case 1:
			resultt = "one";
			break;
		case 2:
			resultt = "two";
			break;
		case 3:
			resultt = "three";
			break;
		case 4:
			resultt = "four";
			break;
		case 5:
			resultt = "five";
			break;
		case 6:
			resultt = "six";
			break;
		case 7:
			resultt = "seven";
			break;
		case 8:
			resultt = "eight";
			break;
		case 9:
			resultt = "nine";
			break;
		}
	}
	return resultt;
}
string twonum(int b)
{	
	string twonum;
	switch (b)
	{
	case 2:
		twonum = "twenty";
		break;
	case 3:
		twonum = "thirty";
		break;
	case 4:
		twonum = "forty";
		break;
	case 5:
		twonum = "fifty";
		break;
	case 6:
		twonum = "sixty";
		break;
	case 7:
		twonum = "seventy";
		break;
	case 8:
		twonum = "eighty";
		break;
	case 9:
		twonum = "ninety";
		break;
	}
	return twonum;
}
int main()
{
	int a, b,c;
	string result;
	cin >> a;
	if (a >= 0 && a <= 19)
	{
		switch (a)
		{
			case 0:
				result = "zero";
				break;
			case 1:
				result = "one";
				break;
			case 2:
				result = "two";
				break;
			case 3:
				result = "three";
				break;
			case 4:
				result = "four";
				break;
			case 5:
				result = "five";
				break;
			case 6:
				result = "six";
				break;
			case 7:
				result = "seven";
				break;
			case 8:
				result = "eight";
				break;
			case 9:
				result = "nine";
				break;
			case 10:
				result = "ten";
				break;
			case 11:
				result = "eleven";
				break; 
			case 12:
				result = "twelve";
				break;
			case 13:
				result = "thirteen";
				break;
			case 14:
				result = "fourteen";
				break;
			case 15:
				result = "fifteen";
				break;
			case 16:
				result = "sixteen";
				break;
			case 17:
				result = "siventeen";
				break;
			case 18:
				result = "eighteen";
				break;
			case 19:
				result = "nineteen";
				break;
		}
		cout <<result;
	}
	else if(a>=20 && a<=99)
	{
		b = a / 10;
		c = a % 10;
		onenum(c);
		twonum(b);
		cout << twonum(b) << " " << onenum(c) << endl;
	}
	else if(a==100)
		cout << "one hundred"<<endl;
	system("pause");
	return 0;
}