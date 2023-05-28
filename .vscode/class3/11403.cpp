#include <iostream>

using namespace std;


int graph[100][100];
int n, input;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> input;
            graph[i][j] = input;
        }
    }



    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(graph[i][j] != 0 || (graph[i][k] != 0 && graph[k][j] != 0))
                {
                    graph[i][j] = 1;
                }
            }
        }
    }



    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << '\n';
    }


}