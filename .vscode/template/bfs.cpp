#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[9] = {false, };
vector<int> graph[9];





// 최단 거리를 구하고 싶다면?
// 저장할 큐에 cost 정보도 넣고, 새로운값을 큐에서 넣을 때마다 이전 값의 cost + 1 해서 넣는다
// 목적지에 도착했을 때 해당 값의 cost가 최단 거리



void bfs(int start)
{
    queue<int> q;
    q.push(start); //첫 노드를 큐에 삽입
    visited[start] = true; // 첫 노드를 방문 처리


    // 큐가 빌 때까지 반복
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " "; // 큐에서 빠져나올 때 방문
        
        // 해당 원소와 연결된 , 아직 방문하지 않은 원소들을 큐에 삽입
        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if(!visited[y])
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }

}

int main() 
{
    // 노드 1에 연결된 노드 정보 저장 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);

    // 노드 2에 연결된 노드 정보 저장 
    graph[2].push_back(1);
    graph[2].push_back(7);

    // 노드 3에 연결된 노드 정보 저장 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);

    // 노드 4에 연결된 노드 정보 저장 
    graph[4].push_back(3);
    graph[4].push_back(5);

    // 노드 5에 연결된 노드 정보 저장 
    graph[5].push_back(3);
    graph[5].push_back(4);

    // 노드 6에 연결된 노드 정보 저장 
    graph[6].push_back(7);

    // 노드 7에 연결된 노드 정보 저장 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);

    // 노드 8에 연결된 노드 정보 저장 
    graph[8].push_back(1);
    graph[8].push_back(7);

    bfs(1);
}