#include <iostream>
#include <vector>
#include <queue>

using namespace std;


// 교훈 : 2차원배열 동적으로 만들어서 매개변수 전달하고 하지 말자.. -> 문제에서 n, m 크기 50이하로 주어졌으니 그냥 전역변수로 arr[50][50] 선언하고 사용하자
// 전달해야하는 상황이 필요하다면 2차원 벡터를 사용하자


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, m, n, k, row, col, count;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;
        pair<bool, bool> field[m][n]; //존재여부, 방문여부
        count = 0;

        for(int j = 0; j < k; j++)
        {
            cin >> row >> col;
            field[row][col] = make_pair(true, false);
        }

        for(int a = 0; a < m; a++)
        {
            for(int b = 0; b < n; b++)
            {
                if(field[a][b].first && !field[a][b].second) //존재하며 방문하지 않은 경우
                {
                    count++;
                    
                    queue<pair<int, int>> q;
                    q.push(make_pair(a, b));
                    field[a][b].second = true;

                    while(!q.empty())
                    {
                        pair<int, int> x = q.front();
                        q.pop();
                        
                        if(n > x.second + 1 && field[x.first][x.second + 1].first && !field[x.first][x.second + 1].second) //위
                        {
                            q.push(make_pair(x.first, x.second + 1));
                            field[x.first][x.second + 1].second = true;
                        }
                        if(m > x.first + 1 && field[x.first + 1][x.second].first && !field[x.first + 1][x.second].second) // 오른쪽
                        {
                            q.push(make_pair(x.first + 1, x.second));
                            field[x.first + 1][x.second].second = true;
                        }
                        if(0 <= x.second - 1 && field[x.first][x.second - 1].first && !field[x.first][x.second - 1].second) // 아래
                        {
                            q.push(make_pair(x.first, x.second - 1));
                            field[x.first][x.second - 1].second = true;
                        }
                        if(0 <= x.first - 1 && field[x.first - 1][x.second].first && !field[x.first - 1][x.second].second) // 왼쪽
                        {
                            q.push(make_pair(x.first - 1, x.second));
                            field[x.first - 1][x.second].second = true;
                        }

                    }

                }
            }
        }

        cout << count << '\n';
    }

}