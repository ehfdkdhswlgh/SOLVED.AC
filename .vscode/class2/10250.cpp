#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int cnt;
    cin >> cnt;

    for(int i = 0; i < cnt; i++)
    {

        int h, w, n;
        cin >> h >> w >> n;

        int n_w = n / h + 1; //room .XX
        int n_h = n % h;  //room X..

        if(n_h == 0) //나머지0은 최상위층을 의미 
        {
            n_h = h;
            n_w--; //이시점(최상위층)에 몫이 1증가되기 때문에 증가되지 않도록 --처리 
        }




        if(n_w < 10)
        {
            cout << n_h << "0" << n_w;
        }
        else
        {
            cout << n_h << n_w;
        }
               
        cout << '\n';

    }

}