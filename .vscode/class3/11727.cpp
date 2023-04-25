#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dp[1001] = {0, 1, 3, 5};

    for(int i = 4; i <= 1000; i++)
    {
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
    }

    int input;
    cin >> input;
    cout << dp[input];
    
}