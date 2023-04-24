#include <iostream>

using namespace std;

// 누적합 개념 : https://jow1025.tistory.com/47

int n, m, i, j, input;
int accum[100001] = {};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int a = 1; a <= n; a++)
    {
        cin >> input;
        accum[a] = accum[a - 1] + input;
    }

    for(int a = 0; a < m; a++)
    {   
        cin >> i >> j;
        cout << accum[j] - accum[i - 1] << '\n';
    }

}