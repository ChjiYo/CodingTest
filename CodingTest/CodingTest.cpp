using namespace std;

#include <iostream>

#define MAX_SIZE 1000001

int arrBool[MAX_SIZE] = {0, 1};

int main()
{
	//�����佺�׳׽��� ü ���
	//2���� �����ؼ� �ش� ���� ������ �ش� ���� ������� �����Ѵ�.

	//���� ���� �� 1�� �ٲ� 


	int iMin(0);
	int iMax(0);
	cin >> iMin >> iMax;

	for(int i = 2; i <= iMax; i++)
		for (int k = 2; i * k <= iMax; k++)
			arrBool[i * k] = 1;

	//0�� �ֵ� ���
	for (int i = iMin; i <= iMax; ++i)
		if (!arrBool[i]) cout << i << '\n';

	return 0;
}