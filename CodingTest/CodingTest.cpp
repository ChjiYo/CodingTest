using namespace std;

#include <iostream>


bool ThreeSqut(int iNumber)
{
	while (true)
	{
		iNumber /= 3;

		if (iNumber == 3)
		{
			return 1;
		}
		else if (iNumber < 3)
		{
			return 0;
		}
	}

	return 0;
}

int main()
{
	int iNumber(0);
	int iResult(0);

	cin >> iNumber;

	while (iNumber != 1)
	{
		if (iNumber % 6 == 0)
		{
			iNumber /= 2;
			iResult++;
		}
		else if (iNumber % 3 == 0)
		{
			iNumber /= 3;
			iResult++;
		}
		else if (ThreeSqut(iNumber - 1))
		{
			iNumber -= 1;
			iResult++;
		}
		else if (iNumber % 2 == 0)
		{
			iNumber /= 2;
			iResult++;
		}
		else 
		{
			iNumber -= 1;
			iResult++;
		}
	}

	cout << iResult;

	return 0;
}
