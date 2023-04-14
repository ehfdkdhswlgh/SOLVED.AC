#include <iostream>
#include <limits.h>

using namespace std;

// 다이나믹 프로그래밍 (dp)
// https://ansohxxn.github.io/algorithm/dp/
// 동적 계획법은 또 다시 동일한 문제를 풀 일이 없도록, 처음으로 한 번 풀었을 때 그 결과를 배열 같은 곳에 저장을 해두고, 동일한 문제를 만나면 배열에서 가져오는 식으로 해결한다.  시간복잡도 O(n)
// 재귀로 구현 -> Top Down 방식
// 반복문으로 구현 -> Bottom Up 방식 (배열의 처음부터 저장해나감)


int dp[1000001] = {};

int lowestFunction(int n)
{

    int sum = INT_MAX;

    if(n == 1)
    {
        return 0;
    }
    if(n % 3 == 0)
    {
        int a;
        if(dp[n/3] != 0)
        {
            a = dp[n / 3];
        }
        else
        {
            a = lowestFunction(n / 3);
        }
        if(a < sum)
        {
            sum = a;
        }
    }
    if(n % 2 == 0)
    {
        int a;
        if(dp[n / 2] != 0)
        {
            a = dp[n / 2];
        }
        else
        {
            a = lowestFunction(n / 2);
        }
    
        if(a < sum)
        {
            sum = a;
        }
    }


    int a;

    if(dp[n - 1] != 0)
    {
        a = dp[n - 1];
    }
    else
    {
        a = lowestFunction(n - 1);
    } 
    
    if(a < sum)
    {
        sum = a;
    }

    dp[n] = sum + 1;
    return sum + 1;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    cin >> n;

    int count = lowestFunction(n);

    cout << count;
    


}