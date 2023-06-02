#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, input;
int map[26][26];
bool visited[26][26];
int danji[625] = {}; //25 * 25
int currentdanji = 0;


void bfs(int row, int col)
{

    queue<pair<int, int>> q;
    q.push({row, col});
    visited[row][col] = true;

    while(!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();
        danji[currentdanji]++;

        if(current.first - 1 >= 0 && visited[current.first - 1][current.second] == false && map[current.first - 1][current.second] == 1) // 위
        {
            q.push({current.first - 1, current.second});
            visited[current.first - 1][current.second] = true;
        }

        if(current.first + 1 < n && visited[current.first + 1][current.second] == false && map[current.first + 1][current.second] == 1) // 아래
        {
            q.push({current.first + 1, current.second});
            visited[current.first + 1][current.second] = true;
        }

        if(current.second - 1 >= 0 && visited[current.first][current.second - 1] == false && map[current.first][current.second - 1] == 1) // 왼쪽
        {
            q.push({current.first, current.second - 1});
            visited[current.first][current.second - 1] = true;
        }

        if(current.second + 1 < n && visited[current.first][current.second + 1] == false && map[current.first][current.second + 1] == 1) // 오른쪽
        {
            q.push({current.first, current.second + 1});
            visited[current.first][current.second + 1] = true;
        }
    
    }

}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%1d", &map[i][j]);
            visited[i][j] = false;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(visited[i][j] == false && map[i][j] == 1)
            {
                currentdanji++;
                bfs(i, j);
            }
        }
    }

    cout << currentdanji << '\n';

    sort(danji + 1, danji + currentdanji + 1);

    for(int i = 1; i <= currentdanji; i++)
    {
        cout << danji[i] << '\n';
    }


}