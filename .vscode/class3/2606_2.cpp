#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int bfs(int start, bool visited[], vector<int> graph[])
{
	queue<int> q;
	q.push(start);
	visited[start] = true;
	int count = 0;

	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		count++;
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


	return count  - 1;

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int n, m;
	cin >> n >> m;

	vector<int> graph[n + 1];
	bool visited[n + 1] = {false, };

	for(int i = 0; i < m; i++)
	{
		int input1, input2;
		cin >> input1 >> input2;
		graph[input1].push_back(input2);
		graph[input2].push_back(input1);
	}


	cout << bfs(1, visited, graph); 

}