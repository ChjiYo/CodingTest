using namespace std;

#include <iostream>

#define MAX_SIZE 12

int main()
{
	//�� �ʱ�ȭ
	int iArrAdd[MAX_SIZE];
	iArrAdd[0] = 1;
	iArrAdd[1] = 1;
	iArrAdd[2] = 2;

	//���̳��� ���α׷������� iArrAdd[] �迭 �ȿ� �� ����
	for (int i = 3; i < 12; ++i)
	{
		iArrAdd[i] = iArrAdd[i - 1] + iArrAdd[i - 2] + iArrAdd[i - 3];
	}

	//�� �ʱ�ȭ
	int iCount(0);
	cin >> iCount;

	int iNumber(0);

	//�� ���
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iNumber;
		cout << iArrAdd[iNumber] << '\n';
	}

	//1,2,3���� �������� ���ڸ� ã�� ���̱� ������
	//iArrAdd[i - 3] -> �� ����� ���� 3�� ���ϸ� iArrAdd[i]�� ����
	//iArrAdd[i - 2] -> �� ����� ���� 2�� ���ϸ� iArrAdd[i]�� ����
	//iArrAdd[i - 1] -> �� ����� ���� 1�� ���ϸ� iArrAdd[i]�� ����

	return 0;
}