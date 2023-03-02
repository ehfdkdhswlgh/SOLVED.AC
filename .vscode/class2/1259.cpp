#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string input;

    while(cin >> input)
    {

        if(input == "0")
        {
            return 0;
        }

        vector<char> v;

        for(int i = 0; i < input.length(); i++)
        {
            v.push_back(input[i]);
        }

        vector<char>::iterator f_iter = v.begin();
        vector<char>::iterator b_iter = v.end() - 1;

        bool b = true;
       
         for(int i = 0; i < v.size() / 2; i++, f_iter++, b_iter--)
         {
              if(*f_iter != *b_iter)
              {
                 b = false;
                 break;
              }
         }

        if(b)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
        
    }


}