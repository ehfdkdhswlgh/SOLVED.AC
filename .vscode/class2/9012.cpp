#include <iostream>
#include <stack>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int cnt;
    cin >> cnt;

    for(int i = 0; i < cnt; i++)
    {
        string input;
        cin >> input;

        stack<char> st;
        
        for(int j = 0; j < input.length(); j++)
        {
            st.push(input[j]);    
        }

        int count = 0;
        bool flag = 0;
        
        for(int j = 0; j < input.length(); j++)
        {
            char c = st.top();
            if(c == ')')
            {
                count++;
            }
            else
            {
                count--;
            }
            st.pop();
            if(count < 0)
            {
                cout << "NO" << '\n';
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
        }
        else if(count == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
        
    }

}