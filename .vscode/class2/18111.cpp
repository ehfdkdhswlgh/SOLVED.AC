#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

//브루트포스

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    int n, m, b;
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int h;
            cin >> h;
            v.push_back(h);
        }
    }

    int times[257];
    fill_n(times, 257, INT_MAX);


    for(int i = 0; i <= 256; i++)
    {

        int stock = b;
        int time = 0;

        for(auto j : v)
        {
            if(j > i) //블록을 제거해야 함
            {
                time += (j - i) * 2;
                stock += (j - i);
            }
            else if(j < i) //블록을 추가해야 함
            {
                time += (i - j);
                stock -= (i - j);
            }
        }

        if(stock < 0) //재고가 없는 경우 (불가능한경우)
        {
            break;
        }
        else
        {
            times[i] = time;
        }
    }

    pair<int*, int*> minmax = minmax_element(begin(times), end(times));
    
    int max_height = 0;

    for(int i = 0; i < 257; i++)
    {
        if(times[i] == *(minmax.first))
        {
            max_height = i;
        }
    }

    cout << *(minmax.first) << " " << max_height;

}