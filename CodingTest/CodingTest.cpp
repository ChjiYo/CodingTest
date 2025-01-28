using namespace std;

#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <vector>

int main()
{

	//값 초기화
	int iCount(0);
	cin >> iCount;

	vector<string>vecStr;
	stack<int> stackInt;
	queue<int> queueInt;


	string strWord;
	int iNumber(0); 

	//값 대입
	for (int i = 0; i < iCount; ++i)
	{
		cin >> strWord;
		vecStr.push_back(strWord);

		if (strWord == "push")
		{
			//queue에 push할 때 들어가는 값을 queue에 저장해서 순차적으로 stack에 저장할 수 있도록 구조
			cin >> iNumber;
			queueInt.push(iNumber);
		}
	}

	//stack기능 구현(라이브러리) / 조건문으로 기능을 나눔
	for (int i = 0; i < vecStr.size(); ++i)
	{
		if (vecStr.at(i) == "top")
		{
			stackInt.empty() ? cout << -1 << endl : cout << stackInt.top() << endl;
		}
		else if (vecStr.at(i) == "size")
		{
			cout << stackInt.size() << endl;
		}
		else if (vecStr.at(i) == "empty")
		{
			stackInt.empty() ? cout << 1 << endl : cout << 0 << endl;
		}
		else if (vecStr.at(i) == "pop")
		{
			if (stackInt.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << stackInt.top() << endl;
				stackInt.pop();
			}
		}
		else if (vecStr.at(i) == "push")
		{
			stackInt.push(queueInt.front());
			queueInt.pop();
		}
	}

	return 0;
}