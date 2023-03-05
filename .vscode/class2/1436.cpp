#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input;
    cin >> input;

    int i = 666;
    int count = 0;

    if(input == 1)
    {
        cout << "666";
    }
    else
    {
        while(true)
        {
            string str = to_string(i);
            
            for(int j = 0; j < str.length() - 2; j++)
            {
                if(str[j] == '6' && str[j + 1] == '6' && str[j + 2] == '6')
                {
                    count++;

                    if(count == input)
                    {
                        cout << i;
                        return 0;
                    }
                    
                    break;
                }           
            }
            i++;
        }
    }

}