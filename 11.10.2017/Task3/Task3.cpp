#include <iostream>
using namespace std;
int numbFib();
int main()
{
	cout << numbFib();
	system("pause");
	return 0;
}
int numbFib()
{
	int *Fibnum = new int[20];
	Fibnum[0] = 0;
	Fibnum[1] = 1;
	int i = 1;
	while(Fibnum[i] < 100)
	{
		i++;
		Fibnum[i] = Fibnum[i - 1] + Fibnum[i - 2];
	}
	return Fibnum[i];
	delete[] Fibnum;
}