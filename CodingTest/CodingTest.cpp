using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//�� �ʱ�ȭ
	int iCount(0);
	int iPosX(0);
	int iPosY(0);

	//vector <pair>�� ����
	vector<pair<int, int>> vPos;
	cin >> iCount;

	//�� ����
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iPosX >> iPosY;
		vPos.push_back({ iPosX  , iPosY });
	}

	//���� �˰���
	sort(vPos.begin(), vPos.end());

	//�� ���
	for (int i = 0; i < vPos.size(); ++i)
	{
		cout << vPos.at(i).first << " " << vPos.at(i).second << '\n';
	}

	/*
	'\n'�� ����Ͽ� ������ ó���մϴ�.
		'\n'�� endl���� �����ϴ�. endl�� ���� ���� ��°� �Բ� ��� ���۸� ������ flush�ϹǷ� ���ʿ��� �۾��� �߰��� �� �ֽ��ϴ�.
	*/

	return 0;
}
