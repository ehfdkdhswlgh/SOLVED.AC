#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input[8];
    
    for(int i = 0; i < 8; i++)
    {
        cin >> input[i];
    }

    if(input[0] == 1)
    {
        for(int i = 1; i < 8; i++)
        {
            if(input[i] != i + 1)
            {
                cout << "mixed";
                return 0;
            }
        }

        cout << "ascending";
    }
    else if(input[0] == 8)
    {
        for(int i = 1, j = 7; i < 8; i++)
        {
            if(input[i] != j)
            {
                cout << "mixed";
                return 0;
            }
            j--;
        }

        cout << "descending";        
    }
    else
    {
        cout << "mixed";
    }

}