#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    map<int, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        
        if(m.find(input) != m.end())
        {
            m[input] = m[input] + 1;
        }
        else
        {
            m.insert({input, 1});
        }
    }

    int k;
    cin >> k;
    
    for(int i = 0; i < k; i++)
    {
        int input;
        cin >> input;
        
        if(m.find(input) != m.end())
        {
            cout << m[input];
        }
        else
        {
            cout << 0;
        }

        cout << " ";
    }



}