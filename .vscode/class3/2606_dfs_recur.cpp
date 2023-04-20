#include <iostream>
#include <vector>


using namespace std;

int count = 0;

void dfs(int x, vector<int> graph[], bool isVisited[])
{
    isVisited[x] = true;
    count++;

    for(int i = 0; i < graph[x].size(); i++)
    {
       int y = graph[x][i];
       if(!isVisited[y]) //방문하지 않았다면
       {
            dfs(y, graph, isVisited);
       }
    }

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> graph[n + 1];
    bool isVisited[n + 1] = {false, };


    for(int i = 0; i < m; i++)
    {
        int input1, input2;
        cin >> input1 >> input2;
        graph[input1].push_back(input2);
        graph[input2].push_back(input1);
    }

    dfs(1, graph, isVisited);
    cout << count-1 ;


}