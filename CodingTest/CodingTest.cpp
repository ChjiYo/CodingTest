using namespace std;

#include <iostream>
#include <vector>
#include <string>

int main()
{
	//�� �ʱ�ȭ
	int iCount(0);
	string strPair;
	vector<string> vecPair;

	cin >> iCount;


	//vector�� �� ����
	for (int i = 0; i < iCount; ++i)
	{
		cin >> strPair;
		vecPair.push_back(strPair);
	}


	//vector.at(i)�ȿ� "()" ���ڿ��� ������ �� ���ڸ� �����ϰ� �����ϰ� ���� pair�� ���� ��쿡�� ¦�� �� �̷� ���̹Ƿ� 
	//NO�� ��ȯ vector�� ��������� pair�� �� �Ŵϱ� YES�� ��ȯ
	for (int i = 0; i < iCount; ++i)
	{
		while (vecPair.at(i).find("()") < 50)
		{
			vecPair.at(i).erase(vecPair.at(i).find("()"), 2);
		}

		//���
		if (vecPair.at(i).empty())
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}

	return 0;
}