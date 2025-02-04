using namespace std;

#include <iostream>
#include <vector>

#define MAX_SIZE 41

int main()
{
	//�� �ʱ�ȭ
	vector<pair<int, int>> vPair;
	vPair.resize(MAX_SIZE);
	vPair.at(0).first = 1;
	vPair.at(1).second = 1;

	//���̳��� ���α׷����� ���� �ٿ�� ����� �� ���� 
	for (int i = 2; i < MAX_SIZE; ++i)
	{
		vPair.at(i).first += vPair.at(i - 1).first + vPair.at(i - 2).first;
		vPair.at(i).second += vPair.at(i - 1).second + vPair.at(i - 2).second;
	}

	int iCount(0);
	cin >> iCount;

	int iNumber(0);

	//�� ��� 
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iNumber;
		cout << vPair.at(iNumber).first << " " << vPair.at(iNumber).second << '\n';
	}

	//�ĺ���ġ�� n��° 0�� ������ 1�� ������ ���� �����
	// Func(n) = Func(n - 1) + Func(n - 2)�̱� ������ 
	// Func(n - 1) + Func(n - 2)�� 0�� 1�� ������ ���ϸ� ������� ����

	return 0;
}