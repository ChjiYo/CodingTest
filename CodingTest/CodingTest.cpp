using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

//좌표 입력 구조체

typedef struct
{
	int iPosX;
	int iPosY;
}POINT;

//정렬 알고리즘 사용을 위한 사용자 지정 정렬 함수
bool PosSort(POINT tLeftPos, POINT tRightPos)
{
	if (tLeftPos.iPosX != tRightPos.iPosX)
	{
		return tLeftPos.iPosX < tRightPos.iPosX;
	}
	else
		return tLeftPos.iPosY < tRightPos.iPosY;
}

int main()
{
	//값 초기화
	int iCount(0);
	POINT iNumber;
	vector<POINT> vPos;

	cin >> iCount;

	//값 대입
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iNumber.iPosX >> iNumber.iPosY;
		vPos.push_back(iNumber);
	}

	sort(vPos.begin(), vPos.end(),&PosSort);

	//값 출력

	for (int i = 0; i < vPos.size(); ++i)
	{
		cout << vPos.at(i).iPosX << " "  << vPos.at(i).iPosY << endl;
	}
	

	return 0;
}
