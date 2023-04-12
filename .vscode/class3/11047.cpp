#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    vector<int> v;

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int count = 0;

    for(auto iter = v.end() - 1; iter != v.begin() - 1; iter--)
    {
        count += (k / *iter);
        k %= *iter;

        if(k == 0)
        {
            break;
        }
    }

    cout << count;

}