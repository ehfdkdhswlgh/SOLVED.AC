#include <iostream>
#include <stack>


using namespace std;

int main()
{
    

    string str;   
    


	while(1)
    {

        stack<char> st;

        bool flag = true;

        getline(cin, str);
        if(str == ".")
        {
            break;
        }
        else
        {
           for(int i = 0; i < str.length(); i++)
           {
                char c = str[i];
            
                if(c == '.')
                {
                    break;
                }
                else if (c == '[' || c == '(')
                {
                    st.push(c);
                }
                else if (c == ']')
                {
                    if(st.empty() || st.top() != '[')
                    {
                        flag = false;
                    }
                    else
                    {
                        st.pop();
                    }
                }
                else if (c == ')')
                {
                    if(st.empty() || st.top() != '(')
                    {
                        flag = false;
                    }
                    else
                    {
                        st.pop();
                    }
                }
           } 

           if(!flag || !st.empty())
           {
                cout << "no" << '\n';
           }
           else
           {
                cout << "yes" << '\n';
           }

        }
        
    }

}