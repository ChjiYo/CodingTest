using namespace std;

#include <iostream>
#include <queue>
#define MAX 101 // 100 ������ ���� ����

int iCount;
int N, Pair;
queue <int> Q;
int G[MAX][MAX];
bool visited[MAX] = { 0, };

void BFS(int s) {

    Q.push(s);
    visited[s] = true;

    while (!Q.empty()) {
        s = Q.front();
        Q.pop();

        for (int i = 1; i <= N; i++) {
            if (G[s][i] == 1 && visited[i] == 0) {
                // ��ΰ� �ִµ� �湮���� �ʾ��� ���
                Q.push(i);
                visited[i] = true;
                iCount++;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> Pair;

    for (int i = 0; i < Pair; i++) {
        int start, end;
        cin >> start >> end;
        G[start][end] = 1;
        //G[end][start] = 1;
    }
    BFS(1);
    cout << iCount << '\n';
    return 0;
}