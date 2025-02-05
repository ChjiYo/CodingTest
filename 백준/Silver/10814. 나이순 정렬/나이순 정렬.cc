using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

bool InfoSort(pair<int, string> LeftValue , pair<int, string> RightValue)
{
	return LeftValue.first < RightValue.first;
}

int main()
{
	int iCount(0);
	cin >> iCount;

	vector<pair<int, string>> vecInfo;
	int iArg(0);
	string strName;

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iArg >> strName;
		vecInfo.push_back({ iArg , strName });

	}

	stable_sort(vecInfo.begin(), vecInfo.end(), InfoSort);

	for (int i = 0; i < vecInfo.size(); ++i)
	{
		cout << vecInfo.at(i).first << " " << vecInfo.at(i).second << '\n';
	}

	return 0;
}