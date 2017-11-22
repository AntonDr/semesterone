#include <iostream>
#include "forStrings.h"

using namespace std;

int main()
{
	//int const N = 250;
	char substring[N] = "Hello";
	char replace[N] = "Goodbye";
	char result[N] = "";
	char source[N] = "  ,,Hello , world hello omg kdakdkak __djad WJAKKWK, Hello";
	//int n = findIndex(source,substring);
	////strConCat(substring, replace,2);
	//cout << substring << endl;
	//strCopy(source, result, n+strLength(substring),strLength(source));
	//cout << result << endl;
	//strConCat(source, result, n);
	//strDel(source, substring);
	
	strReplace(source,substring ,replace);
	
	cout << source << endl;
	system("pause");
}