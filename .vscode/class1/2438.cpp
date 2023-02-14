#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input;

    cin >> input;

    for(int i = 1; i <= input; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}