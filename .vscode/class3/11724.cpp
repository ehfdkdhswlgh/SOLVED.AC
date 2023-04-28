#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool visited[1001] = {false, };
vector<int> graph[1001];


void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        
        for(int i = 0; i < graph[x].size(); i++)
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

    int n, m, start, end, count;
    count = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == false)
        {
            bfs(i);
            count++;
        }
    }

    cout << count;

}