#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int count;
    cin >> count;
    
    string str;
    cin >> str;
    
    int sum = 0;

    for(int i = 0; i < count; i++)
    {
        int num = str[i] - '0';
        sum += num;
    }

    cout << sum;

}