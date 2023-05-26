#include <iostream>

using namespace std;

#define MAX 101

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m;


    int arr[n + 1][n + 1];

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            arr[i][j] = MAX;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        arr[i][i] = 0;
    }

    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    for(int k = 1; k <= n; k++) // k = 정점마다 진행
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(arr[i][k] + arr[k][j] < arr[i][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }


    int bacon = MAX;
    int bacon_sum = MAX;

    for(int i = 1; i <= n; i++)
    {
        int sum = 0;

        for(int j = 1; j <= n; j++)
        {
            sum += arr[i][j];
        }

        if(sum < bacon_sum)
        {
            bacon = i;
            bacon_sum = sum; 
        }
        
    }

    cout << bacon;

}