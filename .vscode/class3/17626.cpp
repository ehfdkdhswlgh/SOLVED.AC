#include <iostream>
#include <algorithm>

using namespace std;

//https://ongveloper.tistory.com/261

int main()
{
    int dp[50001] = {};

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i * i <= 50000; i++)
    {
        dp[i * i] = 1;
    }

    for(int i = 2; i <= 50000; i++)
    {
        for(int j = 1; j * j <= i; j++)
        {
            if(dp[i] == 0)
            {
                dp[i] = dp[j * j] + dp[i - j * j];
            }
            else
            {
                dp[i] = min(dp[i], dp[j * j] + dp[i - j * j]);
                // dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
    }

    int n;
    cin >> n;
    cout << dp[n];


}