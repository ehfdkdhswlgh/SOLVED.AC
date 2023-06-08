#include <iostream>
#include <queue>

using namespace std;

char map[601][601];
bool visited[601][601];
int n, m, in, im;
string input;

void bfs()
{
    int count = 0;
    queue<pair<int, int>> q;

    q.push({in, im});
    visited[in][im] = true;

    while(!q.empty())
    {
        pair<int, int> top = q.front();
        int nn = top.first;
        int mm = top.second;
        q.pop();

        if(map[nn][mm] == 'P')
        {
            count++;
        }

        if(mm + 1 < m && map[nn][mm + 1] != 'X' && visited[nn][mm + 1] == false) // 오른쪽
        {
            q.push({nn, mm + 1});
            visited[nn][mm + 1] = true;
        }

        if(mm - 1 >= 0 && map[nn][mm - 1] != 'X' && visited[nn][mm - 1] == false) // 왼쪽
        {
            q.push({nn, mm - 1});
            visited[nn][mm - 1] = true;
        }

        if(nn + 1 < n && map[nn + 1][mm] != 'X' && visited[nn + 1][mm] == false) // 아래
        {
            q.push({nn + 1, mm});
            visited[nn + 1][mm] = true;
        }

        if(nn - 1 >= 0 && map[nn - 1][mm] != 'X' && visited[nn - 1][mm] == false) // 위
        {
            q.push({nn - 1, mm});
            visited[nn - 1][mm] = true;
        }

    }

    if(count > 0)
    {
        cout << count;
    }
    else
    {
        cout << "TT";
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        for(int j = 0; j < m; j++)
        {
            map[i][j] = input[j];
            if(input[j] == 'I')
            {
                in = i;
                im = j;
            }
            visited[i][j] = false;
        }
    }


    bfs(); 

}