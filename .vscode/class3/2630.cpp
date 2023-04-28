#include <iostream>
#include <vector>

using namespace std;

int blue = 0;
int white = 0;

bool check(vector<vector<int>> v, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v[i][j] != v[0][0])
            {
                return false;
            }
        }
    }

    return true;
}

void divide(vector<vector<int>> v, int n)
{
    if(check(v, n))
    {
        if(v[0][0] == 1)
        {
            blue++;
        }
        else
        {
            white++;
        }
    }
    else
    {
        vector<vector<int>> subv(n, vector<int>(n, 0));

        // 0 ~ (n / 2 - 1)
        // (n / 2) ~ (n - 1)


        for(int i = 0; i <= n / 2 - 1; i++)
        {
            for(int j = 0; j <= n / 2 - 1; j++)
            {
                subv[i][j] = v[i][j];
            }
        }
        divide(subv, n / 2);

        for(int i = 0; i <= n / 2 - 1; i++)
        {
            for(int j = n / 2; j <= n - 1; j++)
            {
                subv[i][j - n / 2] = v[i][j];
            }
        }
        divide(subv, n / 2);


        for(int i = n / 2; i <= n - 1; i++)
        {
            for(int j = 0; j <= n / 2 - 1; j++)
            {
                subv[i - n / 2][j] = v[i][j];
            }
        }
        divide(subv, n / 2);

        for(int i = n / 2; i <= n - 1; i++)
        {
            for(int j = n / 2; j <= n - 1; j++)
            {
                subv[i - n / 2][j - n / 2] = v[i][j];
            }
        }
        divide(subv, n / 2);

    }
}




int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n, input;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> input;
            v[i][j] = input;
        }
    }

    divide(v, n);

    cout << white << '\n' << blue;


}