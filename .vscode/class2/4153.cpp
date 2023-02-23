#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int a, b, c;

    while(cin >> a >> b >> c)
    {
        if (a == 0)
        {
            return 0;
        }

        if(a > b)
        {
            if(c > a) //c가 가장 긴 변
            {
                if(a * a + b * b == c * c)
                {
                    cout << "right";
                }
                else
                {
                    cout << "wrong";
                }
            }
            else //a가 가장 긴 변
            {
                if(c * c + b * b == a * a)
                {
                    cout << "right";
                }
                else
                {
                    cout << "wrong";
                }
            }
        }
        else 
        {
            if(c > b) //c가 가장 긴 변
            {
                if(a * a + b * b == c * c)
                {
                    cout << "right";
                }
                else
                {
                    cout << "wrong";
                }
            }
            else //b가 가장 긴 변
            {
                if(c * c + a * a == b * b)
                {
                    cout << "right";
                }
                else
                {
                    cout << "wrong";
                }
            }
        }
        cout << '\n';
    }

    
}