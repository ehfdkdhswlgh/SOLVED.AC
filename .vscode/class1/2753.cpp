#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input;
    cin >> input;

    if((input % 4 == 0 && input % 100 != 0) || input % 400 == 0)
    {
        cout << '1';
    }
    else
    {
        cout << '0';
    }
	

}