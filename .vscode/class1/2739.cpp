#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int input;
    cin >> input;

    for(int i = 1; i < 10; i++)
    {
        cout << input << " * " << i << " = " << input * i << '\n';
    }

}