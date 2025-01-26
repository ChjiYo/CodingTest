using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

	//값 초기화
	int iCount(0);
	int iNumber(0);

	//이중 vector문으로 초기화 
	vector<vector<int>> vPos;
	cin >> iCount;

	//사이즈 초기화
	vPos.resize(iCount);

	//값 대입
	for (int i = 0; i < iCount; ++i)
	{
		for(int k = 0 ; k < 2 ; ++k)
		{ 
			cin >> iNumber;
			vPos.at(i).push_back(iNumber);
		}
	}

	//람다식을 활용해서 더 빠르게 시도
	sort(vPos.begin(), vPos.end());

	//값 출력

	for (int i = 0; i < vPos.size(); ++i)
	{
		cout << vPos.at(i).at(0) << " " << vPos.at(i).at(1) << endl;
	}
	

	return 0;
}
