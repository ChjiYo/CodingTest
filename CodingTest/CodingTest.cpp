using namespace std;

#include <iostream>

int main()
{
	//값 초기화
	int iMin(0);
	int iMax(0);
	int iIndex(0);

	cin >> iMin >> iMax;

	for (int i = iMin; i <= iMax; ++i)
	{
		iIndex = 0;
		for (int k = 1; k <= i; ++k)
		{
			if (i % k == 0)
			{
				iIndex++;
			}
		}

		if (iIndex == 2)
		{
			cout << i << '\n';
		}

	}

	return 0;
}