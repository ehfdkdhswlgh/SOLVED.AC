#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int input;

    cin >> input;

    if(90 <= input && input <= 100)
    {
        cout << 'A';
    }
    else if(80 <= input && input <= 89)
    {
        cout << 'B';
    }
    else if(70 <= input && input <= 79)
    {
        cout << 'C';
    }
    else if(60 <= input && input <= 69)
    {
        cout << 'D';
    }
    else{
        cout << 'F';
    }

}