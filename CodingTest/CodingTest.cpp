using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//값 초기화
	int iCount(0);
	int iPosX(0);
	int iPosY(0);

	//vector <pair>로 정렬
	vector<pair<int, int>> vPos;
	cin >> iCount;

	//값 대입
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iPosX >> iPosY;
		vPos.push_back({ iPosX  , iPosY });
	}

	//정렬 알고리즘
	sort(vPos.begin(), vPos.end());

	//값 출력
	for (int i = 0; i < vPos.size(); ++i)
	{
		cout << vPos.at(i).first << " " << vPos.at(i).second << '\n';
	}

	/*
	'\n'을 사용하여 개행을 처리합니다.
		'\n'은 endl보다 빠릅니다. endl은 개행 문자 출력과 함께 출력 버퍼를 강제로 flush하므로 불필요한 작업이 추가될 수 있습니다.
	*/

	return 0;
}
