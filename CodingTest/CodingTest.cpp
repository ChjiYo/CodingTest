using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

	//�� �ʱ�ȭ
	int iCount(0);
	int iNumber(0);

	//���� vector������ �ʱ�ȭ
	vector<vector<int>> vPos;
	cin >> iCount;

	//������ �ʱ�ȭ
	vPos.resize(iCount);

	//�� ����
	for (int i = 0; i < iCount; ++i)
	{
		for(int k = 0 ; k < 2 ; ++k)
		{ 
			cin >> iNumber;
			vPos.at(i).push_back(iNumber);
		}
	}

	//���ٽ��� Ȱ���ؼ� �� ������ �õ�
	sort(vPos.begin(), vPos.end(), [](vector<int> tLeftPos, vector<int> tRightPos)
		{
			if (tLeftPos.at(0) != tRightPos.at(0))
			{
				return tLeftPos.at(0) < tRightPos.at(0);
			}
			else
				return tLeftPos.at(1) < tRightPos.at(1);
		});

	//�� ���

	for (int i = 0; i < vPos.size(); ++i)
	{
			cout << vPos.at(i).at(0) << " " << vPos.at(i).at(1) << endl;
	}
	

	return 0;
}
