#include <iostream>
#include <queue>

using namespace std;

bool visited[100001] = {false,};

int n, k;

int bfs()
{
    queue<pair<int, int>> q; // {현재 위치, 비용}
    q.push({n, 0});
    visited[n] = true;

    while(!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();

        if(current.first == k)
        {
            return current.second;
        }
        
        if(current.first - 1 >= 0 && visited[current.first - 1] == false)
        {
            q.push({current.first - 1, current.second + 1});
            visited[current.first - 1] = true;
        }

        if(current.first * 2 <= 100000 && visited[current.first * 2] == false)
        {
            q.push({current.first * 2, current.second + 1});
            visited[current.first * 2] = true;
        }

        if(current.first + 1 <= 100000 && visited[current.first + 1] == false)
        {
            q.push({current.first + 1, current.second + 1});
            visited[current.first + 1] = true;
        }




    }

    return -1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    cin >> n >> k;

    cout << bfs();

}