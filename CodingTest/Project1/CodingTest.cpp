using namespace std;

#include <iostream>
#include <vector>

int main()
{
	int iNumCom(0);
	int iNumPair(0);
	cin >> iNumCom;
	cin >> iNumPair;

	vector<pair<int , int>> vecPair(iNumPair);
	vector<bool> vecCom(iNumCom);
	vecCom.at(0) = true;
	
	pair<int, int> pairInt;
	
	for (int i = 0; i < iNumPair; ++i)
	{
		cin >> pairInt.first >> pairInt.second;
		vecPair.at(i) = { pairInt.first  , pairInt.second};
	}

	for (int i = 0; i < vecCom.size(); ++i)
	{
		if(i + 1)
	}

	return 0;
}