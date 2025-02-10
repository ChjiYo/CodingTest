using namespace std;

#include <iostream>
#include <algorithm>

#define MAX_SIZE 1000000
int arr[MAX_SIZE];

int main()
{
	int iNumber(0);
	cin >> iNumber;

	for (int i = 2; i <= iNumber; ++i)
	{
		//1. 1�� ����
		arr[i] = arr[i - 1] + 1;

		//2. 2�� ����������
		if (i % 2 == 0)
		{
			arr[i] = min(arr[i] , arr[i / 2] + 1);
		}

		//3. 3���� ����������
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}
	
	



	cout << arr[iNumber];
	return 0;
}