#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	stack<int> st;

    int len;
    cin >> len;

    for(int i = 0; i < len; i++)
    {
        int input;
        cin >> input;
        
        if(input == 0)
        {
            st.pop();
        }
        else
        {
            st.push(input);
        }
    }

    int sum = 0;

    while(!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    cout << sum;

}