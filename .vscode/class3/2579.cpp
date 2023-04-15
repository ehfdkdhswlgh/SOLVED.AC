#include <iostream>
#include <algorithm>

// https://velog.io/@gonudayo/%EB%B0%B1%EC%A4%80-2579-%EA%B3%84%EB%8B%A8%EC%98%A4%EB%A5%B4%EA%B8%B0-2156-%ED%8F%AC%EB%8F%84%EC%A3%BC-%EC%8B%9C%EC%8B%9D

using namespace std;

int dp[301] = {};
int stairs[301] = {};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        stairs[i] = input;
    }

    dp[1] = stairs[1];
    dp[2] = stairs[1] + stairs[2];
    dp[3] = max(stairs[1], stairs[2]) + stairs[3];

    for(int i = 4; i <= n; i++)
    {
        dp[i] = max(dp[i - 3] + stairs[i - 1], dp[i - 2]) + stairs[i];
    }

    cout << dp[n];

}