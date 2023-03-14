#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int len;
    cin >> len;

    deque<int> dq;


    for(int i = 0; i < len; i++)
    {
        string command;
        cin >> command;

        if(command == "push_front")
        {
            int cnt;
            cin >> cnt;
            dq.push_front(cnt);
        }
        else if(command == "push_back")
        {
            int cnt;
            cin >> cnt;
            dq.push_back(cnt);

        }
        else if(command == "pop_front")
        {
            if(dq.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(command == "pop_back")
        {
            if(dq.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }            
        }
        else if(command == "size")
        {
            cout << dq.size() << '\n';
        }
        else if(command == "empty")
        {
            if(dq.empty())
            {
                cout << "1" << '\n';
            }
            else
            {
                cout << "0" << '\n';
            }
        }
        else if(command == "front")
        {
            if(dq.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
            }
        }
        else if(command == "back")
        {
            if(dq.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
            }           
        }

    }


}