#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int count, threshold;
    cin >> count >> threshold;

    for(int i = 0; i < count; i++)
    {
        int input;
        cin >> input;

        if(input < threshold)
        {
            cout << input << ' ';
        }
    }

}