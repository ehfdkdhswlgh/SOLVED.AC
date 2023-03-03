#include <iostream>

using namespace std;




int getNum(int a, int b) //a = 층, b = 호
{
    if(a == 0)
    {
        return b;
    }
    if(b == 1)
    {
        return 1;
    }
    return getNum(a-1, b) + getNum(a, b-1);
}




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int input;
    cin >> input;

    for(int i = 0; i < input; i++)
    {
        int k, n;
        cin >> k >> n;

        cout << getNum(k, n) << '\n';        
    }

}