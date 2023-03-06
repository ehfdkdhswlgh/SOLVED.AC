#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int len;
    cin >> len;
    int arr[len];

    for(int i = 0; i < len; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    
    sort(arr, arr+len);

    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << '\n';
    }
    

}