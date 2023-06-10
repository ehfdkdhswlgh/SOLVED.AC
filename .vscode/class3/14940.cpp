#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
bool visited[1001][1001];
int n, m, input, tr, tc;
int result[1001][1001];


struct Coor
{
    int row;
    int col;
    int cost;
    Coor(int _row, int _col, int _cost) : row(_row), col(_col), cost(_cost){};
};


void bfs(int r, int c)
{
    queue<Coor> q;
    q.push(Coor(r, c, 0));
    visited[r][c] = true;

    while(!q.empty())
    {
        Coor top = q.front();
        q.pop();
        result[top.row][top.col] = top.cost;
        
        if(top.row - 1 >= 0 && map[top.row - 1][top.col] != 0 && visited[top.row - 1][top.col] == false) // 상
        {
            q.push(Coor(top.row - 1, top.col, top.cost + 1));
            visited[top.row - 1][top.col] = true;
        }

        if(top.row + 1 <= n && map[top.row + 1][top.col] != 0 && visited[top.row + 1][top.col] == false) // 하
        {
            q.push(Coor(top.row + 1, top.col, top.cost + 1));
            visited[top.row + 1][top.col] = true;
        }

        if(top.col - 1 >= 0 && map[top.row][top.col - 1] != 0 && visited[top.row][top.col - 1] == false) // 좌
        {
            q.push(Coor(top.row, top.col - 1, top.cost + 1));
            visited[top.row][top.col - 1] = true;
        }

        if(top.col + 1 <= m && map[top.row][top.col + 1] != 0 && visited[top.row][top.col + 1] == false) // 우
        {
            q.push(Coor(top.row, top.col + 1, top.cost + 1));
            visited[top.row][top.col + 1] = true;
        }

    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> input;
            map[i][j] = input;
            visited[i][j] = false;
            result[i][j] = -1;

            if(input == 2)
            {
                tr = i;
                tc = j;
            }
            else if(input == 0)
            {
                result[i][j] = 0;
            }

        }
    }

    bfs(tr, tc);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << '\n';
    }

}