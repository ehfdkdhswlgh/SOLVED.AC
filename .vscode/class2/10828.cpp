#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> st;

    int count;
    cin >> count;

    for(int i = 0; i < count; i++)
    {
        string input;
        cin >> input;
        
        if(input == "push")
        {
            int n;
            cin >> n;
            st.push(n);
        }
        else if(input == "pop")
        {
            if(st.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if(input == "size")
        {
            cout << st.size() << '\n';
        }
        else if(input == "empty")
        {
            if(st.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if(input == "top")
        {
            if(st.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << st.top() << '\n';
            }
        }
    }

}