using namespace std;

#include <iostream>
#include <vector>

int main()
{
	//�� �ʱ�ȭ
	int iNumber(0);
	int iResult(0);
	cin >> iNumber;


	for (int i = 1; i <= iNumber; ++i)
	{

		//�� Number�� ���� ������ �� �ʱ�ȭ 
		vector<int> vecInt;
		int iAdd(0);
		int iIndex = i;
		bool bEqual = true;


		//vector�� �ڸ��� �ֱ�
		while (iIndex != 0)
		{
			vecInt.push_back(iIndex % 10);
			iIndex /= 10;
		}

		// 99������ ������ ������ �� �Ѽ���
		if (vecInt.size() <= 2)
		{
			iResult++;
			bEqual = false;
		}


		for (int i = 0; i < vecInt.size() - 1; ++i)
		{
			iAdd = vecInt.at(0) - vecInt.at(1);

			//�ϳ��� �ٸ��� false
			if (vecInt.at(i) - vecInt.at(i + 1) != iAdd)
			{
				bEqual = false;
			}
		}

		//true�� ���� ������� +1;
		if (bEqual)
		{
			iResult++;
		}

	}

	//���
	cout << iResult;

	return 0;
}