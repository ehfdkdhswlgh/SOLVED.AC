#include <iostream>

using namespace std;

// https://mountrivers.github.io/boj11726/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int dp[1001] = {0, 1, 2, 3};
    
    for(int i = 4; i <= 1000; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
    }

    int n;
    cin >> n;
    cout << dp[n];

}