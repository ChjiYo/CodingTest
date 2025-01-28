using namespace std;

#include <iostream>
#include <vector>
#include <string>

int main()
{
	//값 초기화
	int iCount(0);
	string strPair;
	vector<string> vecPair;

	cin >> iCount;


	//vector에 값 삽입
	for (int i = 0; i < iCount; ++i)
	{
		cin >> strPair;
		vecPair.push_back(strPair);
	}


	//vector.at(i)안에 "()" 문자열이 있으면 그 문자를 삭제하고 삭제하고도 남은 pair가 없을 경우에는 짝이 못 이룬 것이므로 
	//NO를 반환 vector가 비어있으면 pair가 된 거니까 YES로 반환
	for (int i = 0; i < iCount; ++i)
	{
		while (vecPair.at(i).find("()") < 50)
		{
			vecPair.at(i).erase(vecPair.at(i).find("()"), 2);
		}

		//출력
		if (vecPair.at(i).empty())
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}

	return 0;
}