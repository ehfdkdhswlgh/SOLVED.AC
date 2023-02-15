#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int max = 0;
    int idx;

    for(int i = 0; i < 9; i++)
    {
        int input;
        cin >> input;

        if (input > max)
        {
            idx = i;
            max = input;
        }
        
    }

    cout << max << '\n' << idx + 1;

}