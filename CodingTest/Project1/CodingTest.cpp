using namespace std;

#include <iostream>

#define MAX_SIZE 12

int main()
{
	//값 초기화
	int iArrAdd[MAX_SIZE];
	iArrAdd[0] = 1;
	iArrAdd[1] = 1;
	iArrAdd[2] = 2;

	//다이나믹 프로그래밍으로 iArrAdd[] 배열 안에 값 대입
	for (int i = 3; i < 12; ++i)
	{
		iArrAdd[i] = iArrAdd[i - 1] + iArrAdd[i - 2] + iArrAdd[i - 3];
	}

	//값 초기화
	int iCount(0);
	cin >> iCount;

	int iNumber(0);

	//값 출력
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iNumber;
		cout << iArrAdd[iNumber] << '\n';
	}

	//1,2,3으로 더해지는 숫자를 찾는 것이기 떄문에
	//iArrAdd[i - 3] -> 각 경우의 수에 3을 더하면 iArrAdd[i]의 갯수
	//iArrAdd[i - 2] -> 각 경우의 수에 2을 더하면 iArrAdd[i]의 갯수
	//iArrAdd[i - 1] -> 각 경우의 수에 1을 더하면 iArrAdd[i]의 갯수

	return 0;
}