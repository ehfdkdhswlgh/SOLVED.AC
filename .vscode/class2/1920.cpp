#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    
    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    vector<int> v2;

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        v2.push_back(input);
    }

    sort(v.begin(), v.end());


    for(auto i : v2)
    {
        if(binary_search(v.begin(), v.end(), i))
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }


}