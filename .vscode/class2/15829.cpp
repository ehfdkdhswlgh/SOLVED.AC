#include <iostream>

using namespace std;

const int R = 31;
const long long M = 1234567891;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int length;
    cin >> length;

    unsigned long long sum = 0;
    long long r = 1;

    for(int i = 0; i < length; i++)
    {
        char input;
        cin >> input;

        int number = input - 96;

        sum = (sum + number * r) % M;
        r = (r * R) % M;

    }
	
    cout << sum;


}