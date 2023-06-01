#include <iostream>
#include <queue>

using namespace std;

int graph[101][101];
bool visited[101][101];
int n, m;



int bfs()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 1});
    visited[0][0] = true;

    while(!q.empty())
    {
        pair<pair<int, int>, int> x = q.front();
        q.pop();

        int cost = x.second;

        if(x.first.first == n - 1 && x.first.second == m - 1)
        {
            return cost;
        }


        if(x.first.first - 1 >= 0 && visited[x.first.first - 1][x.first.second] == false && graph[x.first.first - 1][x.first.second] == 1) // 상
        {
            q.push({{x.first.first - 1, x.first.second}, cost + 1});
            visited[x.first.first - 1][x.first.second] = true;
        }

        if(x.first.first + 1 < n && visited[x.first.first + 1][x.first.second] == false && graph[x.first.first + 1][x.first.second] == 1) // 하
        {
            q.push({{x.first.first + 1, x.first.second}, cost + 1});
            visited[x.first.first + 1][x.first.second] = true;
        }

        if(x.first.second - 1 >= 0 && visited[x.first.first][x.first.second - 1] == false && graph[x.first.first][x.first.second - 1] == 1) // 좌
        {
            q.push({{x.first.first, x.first.second - 1}, cost + 1});
            visited[x.first.first][x.first.second - 1] = true;
        }

        if(x.first.second + 1 < m && visited[x.first.first][x.first.second + 1] == false && graph[x.first.first][x.first.second + 1] == 1) // 우
        {
            q.push({{x.first.first, x.first.second + 1}, cost + 1});
            visited[x.first.first][x.first.second + 1] = true;
        }
    }

    return -1;
}




int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%1d", &graph[i][j]);
            visited[i][j] = false; 
        }
    }

    printf("%i",bfs());
}