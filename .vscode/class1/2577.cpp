#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int a, b, c;
	cin >> a >> b >> c;

	int sum = a * b * c;

	int count[10];
	for(int i = 0; i < 10; i++)
	{
		count[i] = 0;
	}

	int i;

	do
	{
		i = sum % 10;
		count[i]++;
		sum /= 10;
	}
	while(sum != 0);
	
	for(int i = 0; i < 10; i++)
	{
		cout << count[i] << '\n';
	}


}