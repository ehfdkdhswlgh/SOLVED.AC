#include <iostream>

using namespace std;

//https://torbjorn.tistory.com/247


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;

    for(int i = 5; i <= n; i *= 5)
    {
        count += (n / i);
    }

    cout << count;



}