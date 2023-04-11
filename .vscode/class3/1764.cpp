#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
//set : 집합과 같고 삽입과 동시에 자동으로 정렬됨
//빠른 검색으로 존재 여부를 신속하게 알고 싶을때


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	set<string> s;
    vector<string> v;

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }


    for(int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        
        if(s.find(str) != s.end()) //값이 존재한다면
        {
            v.push_back(str);
        }
    }


    sort(v.begin(), v.end());
    cout << v.size() << '\n';

    for(auto i : v)
    {
        cout << i << '\n';
    }

}