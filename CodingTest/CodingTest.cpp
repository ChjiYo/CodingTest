using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//�� �ʱ�ȭ
	int iCount(0);
	int iValue(0);
	int iResult(0);
	cin >> iCount;

	vector<int>vecInt;

	//�� ����
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iValue;
		vecInt.push_back(iValue);
	}

	//���� �˰��� (��������)
	sort(vecInt.begin(), vecInt.end());

	//0 , 0 1, 0 1 2 ������ iResult�� ����
	for (int i = 0; i < vecInt.size(); ++i)
	{
		for (int k = 0; k <= i; ++k)
		{
			iResult += vecInt.at(k);
		}
	}

	//�� ���
	cout << iResult;

	return 0;
}