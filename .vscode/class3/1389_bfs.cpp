#include <iostream>
#include <queue>

using namespace std;

int arr[101][101];
int visited[101];
int n, m, a, b, bacon;
int bacon_sum = 101;


// BFS는 최단경로 알고리즘이다.
void bfs(int st)
{
    queue<int> q;
    visited[st] = 1;
    q.push(st);
    
    while(!q.empty())
    {
        st = q.front();
        q.pop();
        for(int i = 1; i <= n; i++)
        {
            if(arr[st][i] == 1 && visited[i] == 0)
            {
                visited[i] = visited[st] + 1;
                q.push(i);
            }
        }
    }
}

void clear()
{
    for(int i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    
    for(int i = 1; i <= n; i++)
    {   
        for(int j = 1; j <= n; j++)
        {
            arr[i][j] = 0;
        }
    }


    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    for(int i = 1; i <= n; i++)
    {
        clear();
        bfs(i);
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            sum += visited[i];
        }

        if(sum < bacon_sum)
        {
            bacon = i;
            bacon_sum = sum;
        }
    }

    cout << bacon;
    

}