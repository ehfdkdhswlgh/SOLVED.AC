#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int bfs(int start, bool visited[], vector<int> graph[])
{
	stack<int> st;
	st.push(start);
	visited[start] = true;
	int count = 0;

	while(!st.empty())
	{
		int x = st.top();
		st.pop();

		for(int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];
			if(!visited[y])
			{
				visited[y] = true;
				count++; // 스택에 넣을 때 방문함
				st.push(x);
				st.push(y);
				break; // 방문했다면 반복문 탈출 (다시시작)

			}
		}
	}


	return count;

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