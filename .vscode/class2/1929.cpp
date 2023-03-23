#include <iostream>

using namespace std;


//https://velog.io/@max9106/Algorithm-%EC%97%90%EB%9D%BC%ED%86%A0%EC%8A%A4%ED%85%8C%EB%84%A4%EC%8A%A4%EC%9D%98-%EC%B2%B4
//대량의 소수를 구할 때는 에라토스테네스의 체 사용

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int m, n;
    cin >> m >> n;

    int arr[n + 1] = {};
    for(int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }

        for(int j = 2 * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }


    for(int i = m; i <= n; i++)
    {
        if(arr[i] != 0)
        {
            cout << arr[i] << '\n';
        }
    }


}