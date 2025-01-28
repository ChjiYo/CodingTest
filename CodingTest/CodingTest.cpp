using namespace std;

#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <vector>

int main()
{

	//�� �ʱ�ȭ
	int iCount(0);
	cin >> iCount;

	vector<string>vecStr;
	stack<int> stackInt;
	queue<int> queueInt;


	string strWord;
	int iNumber(0); 

	//�� ����
	for (int i = 0; i < iCount; ++i)
	{
		cin >> strWord;
		vecStr.push_back(strWord);

		if (strWord == "push")
		{
			//queue�� push�� �� ���� ���� queue�� �����ؼ� ���������� stack�� ������ �� �ֵ��� ����
			cin >> iNumber;
			queueInt.push(iNumber);
		}
	}

	//stack��� ����(���̺귯��) / ���ǹ����� ����� ����
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