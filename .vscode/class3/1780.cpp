#include <iostream>
#include <vector>

using namespace std;


int count1 = 0;
int count_1 = 0;
int count0 = 0;


bool check(vector<vector<int>> v, int n)
{
    int k = v[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(k != v[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void devide(vector<vector<int>> v, int n)
{
    if(check(v, n)) //모두 같으면
    {
        if(v[0][0] == 0)
        {
            count0++;
        }
        if(v[0][0] == 1)
        {
            count1++;
        }
        if(v[0][0] == -1)
        {
            count_1++;
        }
    }
    else // 같지 않으면
    {
        int d = n / 3;

        //0 ~ d - 1
        //d ~ d*2 - 1
        //d*2 ~ n - 1

        vector<vector<int>> sv(d, vector<int>(d, 0));

        for(int i = 0; i <= d - 1; i++)
        {
            for(int j = 0; j <= d - 1; j++)
            {
                sv[i][j] = v[i][j];
            }
        }
        devide(sv, d);

        for(int i = 0; i <= d - 1; i++)
        {
            for(int j = d; j <= d * 2 - 1; j++)
            {
                sv[i][j - d] = v[i][j];
            }
        }
        devide(sv, d);

        for(int i = 0; i <= d - 1; i++)
        {
            for(int j = d * 2; j <= n - 1; j++)
            {
                sv[i][j - d * 2] = v[i][j];
            }
        }      
        devide(sv, d);  

        for(int i = d; i <= d * 2 - 1; i++)
        {
            for(int j = 0; j <= d - 1; j++)
            {
                sv[i - d][j] = v[i][j];
            }
        }
        devide(sv, d);

        for(int i = d; i <= d * 2 - 1; i++)
        {
            for(int j = d; j <= d * 2 - 1; j++)
            {
                sv[i - d][j - d] = v[i][j];
            }
        }
        devide(sv, d);

        for(int i = d; i <= d * 2 - 1; i++)
        {
            for(int j = d * 2; j <= n - 1; j++)
            {
                sv[i - d][j - 2 * d] = v[i][j];
            }
        }      
        devide(sv, d);

        for(int i = d * 2; i <= n - 1; i++)
        {
            for(int j = 0; j <= d - 1; j++)
            {
                sv[i - 2 * d][j] = v[i][j];
            }
        }
        devide(sv, d);

        for(int i = d * 2; i <= n - 1; i++)
        {
            for(int j = d; j <= d * 2 - 1; j++)
            {
                sv[i - 2 * d][j - d] = v[i][j];
            }
        }
        devide(sv, d);

        for(int i = d * 2; i <= n - 1; i++)
        {
            for(int j = d * 2; j <= n - 1; j++)
            {
                sv[i - 2 * d][j - 2 * d] = v[i][j];
            }
        }     
        devide(sv, d);    
        


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

    devide(v, n);
    cout << count_1 << '\n' << count0 << '\n' << count1;
}