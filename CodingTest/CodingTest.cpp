using namespace std;

#include <iostream>
#include <vector>

int main()
{
	//값 초기화
	int iNumber(0);
	int iResult(0);
	cin >> iNumber;


	for (int i = 1; i <= iNumber; ++i)
	{

		//새 Number가 들어올 때마다 값 초기화 
		vector<int> vecInt;
		int iAdd(0);
		int iIndex = i;
		bool bEqual = true;


		//vector에 자릿수 넣기
		while (iIndex != 0)
		{
			vecInt.push_back(iIndex % 10);
			iIndex /= 10;
		}

		// 99이하인 값들은 어차피 다 한수임
		if (vecInt.size() <= 2)
		{
			iResult++;
			bEqual = false;
		}


		for (int i = 0; i < vecInt.size() - 1; ++i)
		{
			iAdd = vecInt.at(0) - vecInt.at(1);

			//하나라도 다르면 false
			if (vecInt.at(i) - vecInt.at(i + 1) != iAdd)
			{
				bEqual = false;
			}
		}

		//true일 때만 결과값에 +1;
		if (bEqual)
		{
			iResult++;
		}

	}

	//출력
	cout << iResult;

	return 0;
}