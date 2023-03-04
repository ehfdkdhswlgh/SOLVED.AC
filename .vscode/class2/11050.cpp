#include <iostream>

using namespace std;


int factorial(int input)
{
    if(input <= 0)
    {
        return 1;
    }

    int sum = input;

    for(int i = input - 1; i > 0; i--)
    {
        sum *= i;
    }

    return sum;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(n-k) * factorial(k));
    
}