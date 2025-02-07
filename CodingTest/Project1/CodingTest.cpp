using namespace std;

#include <iostream>

#define MAX_SIZE 10001

int iDP[MAX_SIZE];

int main()
{
	int iCount(0);
	cin >> iCount;

	iDP[1] = 1;
	iDP[2] = 2;

	for (int i = 3; i <= iCount; ++i)
	{
		iDP[i] = (iDP[i - 1]  %  10007)+ (iDP[i - 2] % 10007);
	}

	cout << iDP[iCount] % 10007;

	return 0;
}