#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input;
    cin >> input;

    for(int i = 1; i <= 1000000; i++)
    {

        int sum = i;
        int j = i;

        do
        {
            sum += j % 10;
            j /= 10;
        } while (j != 0);
        
        if(input == sum)
        {
            cout << i;
            return 0;
        }

    }
    
    cout << 0;
    return 0;

        

}