#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    

    map<string, string> pw_map;

    int n, m;
    cin >> n >> m;


    for(int i = 0; i < n; i++)
    {
        string address, password;
        cin >> address >> password;
        pw_map.insert(pair<string, string>(address, password));
    }

    for(int i = 0; i < m; i++)
    {
        string address;
        cin >> address;
        cout << pw_map[address] << '\n';
    }


}