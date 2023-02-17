#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int count;
    cin >> count;

    int min = 1000000;
    int max = -1000000;

    for(int i = 0; i < count; i++)
    {
        int input;
        cin >> input;
        
        if(input > max)
        {
            max = input;
        }

        if(input < min)
        {
            min = input;
        }
    }

    cout << min << ' ' << max;

}