#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int cnt;
    cin >> cnt;

    for(int i = 1; i <= cnt; i++)
    {
        for(int j = cnt - i; j > 0; j--)
        {
            cout << ' ';
        }
        for(int k = 0; k < i; k++)
        {
            cout << '*';
        }
        cout << '\n';
    }

}