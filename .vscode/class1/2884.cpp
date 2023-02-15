#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int h, m;
    cin >> h >> m;

    if(m - 45 < 0) //시 단위가 바뀔 때
    {
        if(h == 0) //자정일 때
        {   
            h = 23;
        }
        else
        {
            h--;
        }
        
        int remain = 45 - m;
        m = 60 - remain;
        
    }
    else //시 단위가 바뀌지 않을 때
    {
        m -= 45;
    }

    cout << h << ' ' << m;

}