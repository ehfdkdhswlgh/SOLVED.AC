#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input;
    cin >> input;

    if(input == 1)
    {
        cout << input;
    }
    else
    {
        int length = 1;
        int idx = 1;

        do
        {
            if(input <= idx)
            {
                cout << length;
                return 0;
            }
            else
            {
                idx += length++ * 6;
            }
        } while (true);
        
    }

}