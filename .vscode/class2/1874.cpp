#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    stack<int> st;
    vector<char> v;

	int n;
    cin >> n;

    int idx = 0;

    for(int i = 0; i < n; i++)
    {

        int input;
        cin >> input;

        while(true)
        {

            if(st.size() >= 1)
            {
                if(st.top() == input)
                {
                    st.pop();
                    v.push_back('-');
                    break;
                }
                else if(st.top() < input)
                {
                    st.push(++idx);
                    v.push_back('+');
                }
                else if(st.top() > input)
                {
                    cout << "NO" << '\n';
                    return 0;
                }
            }
            else
            {
                st.push(++idx);
                v.push_back('+');
            }

        }

    }

    for(auto i : v)
    {
        cout << i << '\n';
    }


}

