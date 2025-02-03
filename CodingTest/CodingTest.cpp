using namespace std;

#include <iostream>
#include <algorithm>

#define MAX_SIZE 1000000
int arr[MAX_SIZE];

int main()
{
	int iNumber(0);
	cin >> iNumber;

	// 2 3 4 5 6 7 8 9 10
	for (int i = 2; i <= iNumber; ++i)
	{
		//1. 1�� ����
		arr[i] = arr[i - 1] + 1;

		//2. 2�� ����������
		if (i % 2 == 0)
		{
			//2 4 6 8 10
			arr[i] = min(arr[i] , arr[i / 2] + 1);
			int b = 10;
		}

		//3. 3���� ����������
		if (i % 3 == 0)
		{
			//3 5 7 9
			arr[i] = min(arr[i], arr[i / 3] + 1);
			int b = 10;
		}
		int a = 10;
	}
	
	


	cout << arr[iNumber];
	return 0;

}