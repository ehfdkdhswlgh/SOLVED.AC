#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long arr[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5};

    for(int i = 9; i <= 100; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 5];
    }

    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        cout << arr[n] << '\n';
    }

}