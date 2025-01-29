using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//값 초기화
	int iCount(0);
	int iValue(0);
	int iResult(0);
	cin >> iCount;

	vector<int>vecInt;

	//값 대입
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iValue;
		vecInt.push_back(iValue);
	}

	//정렬 알고리즘 (오름차순)
	sort(vecInt.begin(), vecInt.end());

	//0 , 0 1, 0 1 2 순으로 iResult에 더함
	for (int i = 0; i < vecInt.size(); ++i)
	{
		for (int k = 0; k <= i; ++k)
		{
			iResult += vecInt.at(k);
		}
	}

	//값 출력
	cout << iResult;

	return 0;
}