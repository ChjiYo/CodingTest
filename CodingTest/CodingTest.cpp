using namespace std;

#include <iostream>
#include <vector>

int main()
{
	int iNumber(0);
	int iResult(0);
	cin >> iNumber;


	for (int i = 1; i <= iNumber; ++i)
	{
		vector<int> vecInt;
		int iAdd(0);
		int iIndex = i;
		bool bEqual = true;

		while (iIndex != 0)
		{
			vecInt.push_back(iIndex % 10);
			iIndex /= 10;
		}

		if (vecInt.size() <= 2)
		{
			iResult++;
			bEqual = false;
		}


		for (int i = 0; i < vecInt.size() - 1; ++i)
		{
			iAdd = vecInt.at(1) - vecInt.at(0);

			if (vecInt.at(i) - vecInt.at(i + 1) != iAdd)
			{
				bEqual = false;
			}
		}

		if (bEqual)
		{
			iResult++;
		}

	}


	cout << iResult;

	return 0;
}