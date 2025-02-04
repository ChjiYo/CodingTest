using namespace std;

#include <iostream>
#include <vector>

#define MAX_SIZE 41

int main()
{
	//값 초기화
	vector<pair<int, int>> vPair;
	vPair.resize(MAX_SIZE);
	vPair.at(0).first = 1;
	vPair.at(1).second = 1;

	//다이나믹 프로그래밍을 통한 다운업 방식의 값 대입 
	for (int i = 2; i < MAX_SIZE; ++i)
	{
		vPair.at(i).first += vPair.at(i - 1).first + vPair.at(i - 2).first;
		vPair.at(i).second += vPair.at(i - 1).second + vPair.at(i - 2).second;
	}

	int iCount(0);
	cin >> iCount;

	int iNumber(0);

	//값 출력 
	for (int i = 0; i < iCount; ++i)
	{
		cin >> iNumber;
		cout << vPair.at(iNumber).first << " " << vPair.at(iNumber).second << '\n';
	}

	//파보나치라 n번째 0의 개수와 1의 개수를 세는 방법은
	// Func(n) = Func(n - 1) + Func(n - 2)이기 때문에 
	// Func(n - 1) + Func(n - 2)의 0과 1의 개수를 더하면 결과값이 나옴

	return 0;
}