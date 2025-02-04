using namespace std;

#include <iostream>

const int MAX = 100;
long long dp[MAX];

long long fibonacci(int n)
{
	if (n <= 1) return n;
	if (dp[n] != 0) return dp[n];
	return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
	cout << fibonacci(50) << endl;
	return 0;
}