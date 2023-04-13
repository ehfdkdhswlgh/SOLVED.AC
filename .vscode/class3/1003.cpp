#include <iostream>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t; 
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if(n == 0)
        {
            cout << 1 << " " << 0 << '\n';
        }
        else if(n == 1)
        {
            cout << 0 << " " << 1 << '\n';
        }
        else if(n == 2)
        {
            cout << 1 << " " << 1 << '\n';
        }
        else
        {

            int beforebefore = 0;
            int before = 1;

            for(int j = 0; j < n - 1; j++)
            {
                int tmp = before;
                before += beforebefore;
                beforebefore = tmp;
            }

            cout << beforebefore << " " << before << '\n';


        }

    }

	

}