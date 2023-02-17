#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int count;
    cin >> count;
    
    for(int i = 0; i < count; i++)
    {

        int A, B;
        cin >> A >> B;
        cout << A + B << '\n';

    }

}