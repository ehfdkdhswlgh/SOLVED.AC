#include <iostream>
#include <algorithm>

using namespace std;


bool compare(string a, string b)
{
    if(a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
   
    int cnt;
    cin >> cnt;

    string arr[cnt];

    for(int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+cnt, compare);

    for(int i = 0; i < cnt; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            continue;
        }
        cout << arr[i] << '\n';
    }

}