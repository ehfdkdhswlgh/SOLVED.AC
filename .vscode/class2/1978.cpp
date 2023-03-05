#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int roop;
    cin >> roop;

    int count = 0;

    for(int i = 0 ; i < roop; i++)
    {
        int input;
        cin >> input;

        
        if(input == 1)
        {
        }
        else if(input == 2)
        {
            count++;
        }
        else
        {
            int j = 2;
            for(; j < input; j++)
            {
                if(input % j == 0)
                {
                    break;
                }
            }

            if(j == input)
            {
                count++;
            }
        }   
    }

    cout << count;
}