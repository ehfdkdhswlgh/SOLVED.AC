#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

bool compare(pair<int, int>a, pair<int, int>b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int len;
    cin >> len;

    vector<pair<int, int>> v;

    for(int i = 0; i < len; i++)
    {
        int x, y;
        cin >> x >> y;
        
        v.push_back(make_pair(x, y));
    }
	
    sort(v.begin(), v.end(), compare);

    for(auto i : v)
    {
        cout << i.first << " " << i.second << '\n';
    }

}