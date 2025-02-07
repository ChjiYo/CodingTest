using namespace std;

#include <iostream>
#include <vector>
#include <queue>

#define MAX_SIZE 100
vector<int> graph[MAX_SIZE];
bool visited[MAX_SIZE];

void BFS(int _iBeginIndex)
{
	queue<int> q;
	q.push(_iBeginIndex);
	visited[_iBeginIndex] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		cout << node << " "; 
	
		for (int next : graph[node])
		{
			if (!visited[next])
			{
				visited[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	graph[1].push_back(1);
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(4);

	graph[2].push_back(6);
	graph[2].push_back(5);
	graph[2].push_back(7);
	graph[2].push_back(8);
	graph[2].push_back(9);
	graph[2].push_back(10);

	graph[3].push_back(11);
	graph[3].push_back(12);

	BFS(2);

	return 0;
}