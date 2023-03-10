#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
       return a.second < b.second; 
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt;
    cin >> cnt;

    vector<pair<int, int>> v;

    for(int i = 0; i < cnt; i++)
    {
        int x , y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for(auto i : v)
    {
        cout << i.first << " " << i.second << '\n';
    }


}