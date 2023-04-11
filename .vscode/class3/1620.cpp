#include <iostream>
#include <map>


using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    map<string, int> name_map;
    map<int, string> number_map;


    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        name_map.insert(pair<string, int>(str, i));
        number_map.insert(pair<int, string>(i, str));
    }

    for(int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if(isdigit(str[0]))
        {
            cout << number_map[stoi(str)] << '\n';
        }
        else
        {
            cout << name_map[str] << '\n';
        }
    }

}