#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[1001];
bool visited[1001];

int n, m, v, node1, node2;


void reset_visited()
{
    for(int i = 1; i <= n; i++)
    {
        visited[i] = false;
    }
}


void dfs(int x)
{
    visited[x] = true;
    cout << x << " ";

    for(int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if(!visited[y])
        {
            dfs(y);
        }
    }
}


void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> v;



    for(int i = 0; i < m; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    for(int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    reset_visited();
    dfs(v);
    cout << '\n';
    reset_visited();
    bfs(v);

}