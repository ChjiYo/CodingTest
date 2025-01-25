using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//��ǥ �Է� ����ü
	typedef struct
	{
		int iPosX;
		int iPosY;
	}POINT;

	//�� �ʱ�ȭ
	int iCount(0);
	POINT iNumber;
	vector<POINT> vPos;

	cin >> iCount;

	//�� ����
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iNumber.iPosX >> iNumber.iPosY;
		vPos.push_back(iNumber);
	}

	//���ٽ��� Ȱ���ؼ� �� ������ �õ�
	sort(vPos.begin(), vPos.end(), [](POINT tLeftPos, POINT tRightPos)
		{
			if (tLeftPos.iPosX != tRightPos.iPosX)
			{
				return tLeftPos.iPosX < tRightPos.iPosX;
			}
			else
				return tLeftPos.iPosY < tRightPos.iPosY;
		});

	//�� ���

	for (int i = 0; i < vPos.size(); ++i)
	{
		cout << vPos.at(i).iPosX << " "  << vPos.at(i).iPosY << endl;
	}
	

	return 0;
}
