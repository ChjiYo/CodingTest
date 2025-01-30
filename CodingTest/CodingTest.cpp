using namespace std;

#include <iostream>

#define MAX_SIZE 1000001

int arrBool[MAX_SIZE] = {0, 1};

int main()
{
	//에라토스테네스의 체 방법
	//2부터 시작해서 해당 수를 제외한 해당 수의 배수들을 제거한다.

	//제곱 수를 다 1로 바꿈 


	int iMin(0);
	int iMax(0);
	cin >> iMin >> iMax;

	for(int i = 2; i <= iMax; i++)
		for (int k = 2; i * k <= iMax; k++)
			arrBool[i * k] = 1;

	//0인 애들 출력
	for (int i = iMin; i <= iMax; ++i)
		if (!arrBool[i]) cout << i << '\n';

	return 0;
}