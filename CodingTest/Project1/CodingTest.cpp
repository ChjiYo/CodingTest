using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

bool InfoSort(pair<int, string> LeftValue, pair<int, string> RightValue)
{
	return LeftValue.first < RightValue.first;
}

int main()
{
	//값 초기화
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

	//사용자지정 정렬 알고리즘
	//stable_sort : 안정적인 정렬 알고리즘
	stable_sort(vecInfo.begin(), vecInfo.end(), InfoSort);

	//출력
	for (int i = 0; i < vecInfo.size(); ++i)
	{
		cout << vecInfo.at(i).first << " " << vecInfo.at(i).second << '\n';
	}

	return 0;
}